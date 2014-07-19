#!/usr/bin/env python

t = int( raw_input() )

for i in range(t):

	a = int( raw_input() )
	
	if a == 0 or a == 1  : print '0 1'
	elif a == 2 : print '0 2'
	elif a == 3 : print '0 6'
	elif a == 4 : print '2 4'
	elif a == 5 or a == 8 or a == 6 : print '2 0'
	elif a == 7 : print '4 0'
	elif a == 9 : print '8 0'
	else : print '0 0'
