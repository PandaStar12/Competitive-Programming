t = int( raw_input() )
 
for i in range (t):
 
        a  = int( raw_input() )
        suma = 0
        tab = []
        tab = map( int, raw_input().split() )   
        for j in tab : suma += j
        print suma

