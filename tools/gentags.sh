#!/bin/bash
#-or -name '*.pod' \
find $@ -type f -name '*.pl' -or -name '*.pm' \
  | ./pltags.pl -f tags -v -R -L -
