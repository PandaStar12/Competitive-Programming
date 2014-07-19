#!/usr/bin/env python

t = int( raw_input() )

for i in range(t):
	
	n,x,y = map( int, raw_input().split() )
	
	j = x
	
	while( j < n ) :
		
		if j % y != 0 : print j,
		j += x
