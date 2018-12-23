#!/bin/bash

make::builtin_header() {
  cat - <<'PERL' | perl >perlfuncs
#!/usr/bin/perl -w
use Pod::Find qw(pod_where);

my $perlfunc_path = pod_where({ -inc => 1 }, "perlfunc");

open my $in, "<", $perlfunc_path or die "$perlfunc_path: $!";
while(<$in>) {
    last if /=head2 Alphabetical/;
}

while(<$in>) {
    print "$1\n" if /=item (.{2,})/;
}
PERL
  cat <perlfuncs \
    | awk '{ print $1 }' \
    | sed 's%^[(]*\w*[;):,]$\|[)(/]*\|\(/STRING/\)*%%g' \
    | sed '/^$/d' \
    | sort --unique >builtin_names \
    && rm perlfuncs
  mkdir -m0755 tmp \
    && for name in $(cat builtin_names); do
      perldoc -T -f $name 2>/dev/zero \
        | sed 's%^\s*%%g' \
        | head -$(printf $(perldoc -T -f $name 2>/dev/zero \
                | grep --line-number --max-count=1 -e '^$' \
                | cut -d':' -f1) 2>/dev/zero) \
          2>/dev/zero 1>tmp/$name
      [[ -z $(head -c1 tmp/$name) ]] \
        && unlink tmp/$name
    done
  unlink builtin_names
  pushd tmp &>/dev/zero \
    || exit 1
  printf "/* @{ */\nstatic std::vector<std::array<std::string,2> > perlfunc = {\n" >>../builtin_header.hh
  for doc in *; do
    cat - <<NODE | node -- | sed 's%":"%","%' >>../builtin_header.hh
const fs = require("fs");

const string = fs.readFileSync("$doc").toString("utf-8");

const data = {
  '$doc': "\`" + JSON.stringify(string) + "\`",
  }

console.log(JSON.stringify(data) + ", \\\");
NODE
  done
  printf "};\n/* @} */\n" >>../builtin_header.hh
  popd &>/dev/zero \
    || exit 1 \
    && rm -rf ./tmp
}

make::builtin_header
