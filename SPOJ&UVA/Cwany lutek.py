#!/usr/bin/env python

t = int( raw_input() )

for i in range(t):
	n, k = map( int, raw_input().split() )
	if n | k == n : print 'N'
	else : print 'P'
