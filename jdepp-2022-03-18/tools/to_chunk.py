#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# Usage: to_chunk.py [-p, -prob] < in.JDP
#   translate chunker output into human-readable chunked sequences
#   support only utf-8
import sys, re
if "-h" in sys.argv[1:] or "--help" in sys.argv[1:]:
    sys.exit ("Usage: %s\n  -p, --prob\tshow chunking probability\n  -q, --quiet\tshow only wrongly chunked sentences" % sys.argv[0])
prob   = "-p" in sys.argv[1:] or "--prob"  in sys.argv[1:]
quiet  = "-q" in sys.argv[1:] or "--quiet" in sys.argv[1:]
ignore   = ("-i" in sys.argv[1:] and sys.argv[sys.argv.index ('-i') + 1]) or \
           ("--ignore" in sys.argv[1:] and sys.argv[sys.argv.index ('--ignore') + 1]) or \
            ""

charset = ''
text  = ''
fails = False
bid   = 0
pat_s = re.compile (u'[\t ]')
pat_c = re.compile (u'^(?:B|I)@[\d\.]+$')
pat_i = re.compile (re.escape (ignore))
info  = True
for line in iter (sys.stdin.readline, ""): # no buffering
    if line[:7] == '# S-ID:' or (ignore and pat_i.match (line)):
        text += line
    elif line[:-1] == 'EOS':
        text += line
        if not quiet or fails:
            text = text.replace ('\t', '│')
            sys.stdout.write (text)
            sys.stdout.flush ()
        text  = ""
        bid   = 0
        fails = False
    elif line[0] == '*':
        flag = True
    elif info and bid > 0:
        field = pat_s.split (line[:-1])
        surf, (gold, auto) = field[0], field[-2:]
        p = prob and pat_c.match (auto) and "%.2f" % float (auto[2:]) or ""
        info &= auto[0:1] == 'I' or auto[0:1] == 'B'
        if auto[0:1] == 'B' and gold == 'B':
            text += "\t%s " % p # "┃" len
        elif auto[0:1] == 'I' and gold == 'B': # false negative
            text += "\033[36m\t%s \033[0m" % p
            fails |= True
        elif auto[0:1] == 'B' and gold == 'I': # false positive
            text += "\033[31m\t%s \033[0m" % p
            fails |= True
        elif flag:
            text += "\t%s " % p
        bid += flag and 1 or 0
        flag = False
        text += "%s " % surf
    else:
        surf = pat_s.split (line[:-1], 1)[0]
        text += "%s%s " % ("\t " if bid > 0 and flag else "", surf)
        bid += 1
        flag = False
