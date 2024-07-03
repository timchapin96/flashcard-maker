#!/usr/bin/env python3
import sys, re

sep = re.compile (u'(?:\t| )')

for line in sys.stdin:
    if line[0] == '#' or line[0] == '*':
        pass
    elif line[0] == 'E':
        sys.stdout.write ("\n")
    else:
        sys.stdout.write (sep.split (line, 1)[0])
