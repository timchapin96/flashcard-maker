#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#    support only utf-8
import sys, re

if len (sys.argv) < 3:
    sys.exit ("Usage: %s auto gold" % sys.argv[0])

def collect_info (fn):
    sep = re.compile (u'(?:\t| )+')
    chunk, depnd = [], []
    l, pos, head = 0, [], []
    for line in open (fn):
        if   line[0] == '#':
            pass
        elif line[0] == '*':
            if line[-3] != '-':
                head.append (int (line[:-1].split (' ')[2][:-1]))
            pos.append (l)
        elif line[0] == 'E':
            pos.append (l)
            chunk_pos = []
            for i in range (1, len (pos)):
                chunk_pos.append (tuple ([pos[i-1], pos[i]]))
            chunk.append (set (chunk_pos))
            depnd.append (set ())
            for i in range (0, len (chunk_pos) - 1):
                depnd[-1].add (tuple ([chunk_pos[i], chunk_pos[head[i]]]))
            l, pos, head = 0, [], []

        else:
            l += len (sep.split (line[:-1], 1)[0])
    return chunk, depnd

chunk_a, depnd_a = collect_info (sys.argv[1])
chunk_g, depnd_g = collect_info (sys.argv[2])

if len (chunk_a) != len (chunk_g):
    sys.stderr.write ("# sentences mismatched\n")

n = len (chunk_a)

ok  = sum (len (chunk_a[i] & chunk_g[i]) for i in range (n))
sok = sum (1 if len (chunk_a[i] & chunk_g[i]) == len (chunk_g[i]) else 0 for i in range (n))
all_a = sum (len (chunk) for chunk in chunk_a)
all_g = sum (len (chunk) for chunk in chunk_g)

pre = ok * 1.0 / all_a
rec = ok * 1.0 / all_g

sys.stderr.write ("chunk:\n")
sys.stderr.write ("  precision: %.4f (%d/%d)\n" % (pre, ok, all_a))
sys.stderr.write ("  recall:    %.4f (%d/%d)\n" % (rec, ok, all_g))
sys.stderr.write ("  f1:        %.4f\n" % (2 * pre * rec / (pre + rec)))
sys.stderr.write ("  sent acc.: %.4f (%d/%d)\n" % (sok * 1.0 / n, sok, n))

ok = sum (len (depnd_a[i] & depnd_g[i]) for i in range (n))
sok = sum (1 if len (depnd_a[i] & depnd_g[i]) == len (depnd_g[i]) else 0 for i in range (n))
all_a = sum (len (depnd) for depnd in depnd_a)
all_g = sum (len (depnd) for depnd in depnd_g)

pre = ok * 1.0 / all_a
rec = ok * 1.0 / all_g

sys.stderr.write ("depnd:\n")
sys.stderr.write ("  precision: %.4f (%d/%d)\n" % (pre, ok, all_a))
sys.stderr.write ("  recall:    %.4f (%d/%d)\n" % (rec, ok, all_g))
sys.stderr.write ("  f1:        %.4f\n" % (2 * pre * rec / (pre + rec)))
sys.stderr.write ("  sent acc.: %.4f (%d/%d)\n" % (sok * 1.0 / n, sok, n))
