#!/bin/bash

build:functions() {
  printf "/* @{ */\nstatic std::vector<std::array<std::string,3> > functions = {\n" >>functions.hh
  for name in $(perl /usr/share/perl5/core_perl/Pod/Functions.pm \
    | sed '/^[A-Z].*\|^$/d' \
    | sed 's%\s*%%' \
    | sed 's%,\s*%\n%g' \
    | sed 's%__.*\|^[a-z].*[/]*[A-Z]*[/]%%' \
    | sed '/^$/d'); do
      perldoc -u -T -f $name 2>/dev/zero \
        | grep -oe '=item .*' \
        | sed 's%=item%%g' \
        | sed 's%[CIX]<\|[>]%%g' \
        | sed 's%^.*$%\0\ %g' >.code
      perldoc -u -T -f $name 2>/dev/zero \
        | grep -oe '=for Pod::Functions.*' \
        | sed 's%=for Pod::Functions%%g' \
        | sed 's%.*%\0\ %' >.info
    cat - <<NODE | node -- | sed 's%":"%","%g' >>functions.hh
const fs = require("fs");
const code = fs.readFileSync(".code").toString("utf-8");
const info = fs.readFileSync(".info").toString("utf-8");
console.log("{ \"$name\", " + JSON.stringify(code) + ", " + JSON.stringify(info) + " }, \\\");
NODE
  done
  rm -f .info .code
  printf "};\n/* @} */\n" >>functions.hh
  return
}

build:variables() {
  printf "/* @{ */\nstatic std::vector<std::array<std::string,3> > variables = {\n" >>variables.hh
  shopt -s nullglob
  for var in $(perldoc -u -T perlvar \
    | grep -oe '^=item.*' \
    | sed 's%=item %%' \
    | sort --unique); do
    perldoc -u -T -v $var \
      | grep -oe '=item .*' \
      | sed 's%=item%%g' \
      | sed 's%[CIX]<\|[>]%%g' \
      | sed 's%^.*$%\0\ %g' >.code
    printf "[more](https://learn.perl.org/docs/keywords.html#perlvar)\ " >.info
    cat - <<NODE | node -- | sed 's%":"%","%' >>variables.hh
const fs = require("fs");
const code = fs.readFileSync(".code").toString("utf-8");
const info = fs.readFileSync(".info").toString("utf-8");
console.log("{ \"$var\", " + JSON.stringify(code) + ", " + JSON.stringify(info) + " }, \\\");
NODE
  done
  rm -f .info .code
  printf "};\n/* @} */\n" >>variables.hh
  return
}

for arg in $@; do
  build:"$arg"
done
