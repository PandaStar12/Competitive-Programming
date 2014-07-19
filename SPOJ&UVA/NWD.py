#!/usr/bin/env python

def nwd(a, b):
    while b:
        a, b = b, a%b
    return a
	
t = int( raw_input() )

for i in range(t) :
	a,b = map( int, raw_input().split() )
	print nwd(a,b)
