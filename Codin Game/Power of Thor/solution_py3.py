import sys
import math

lx, ly, x, y = [int(i) for i in input().split()]

# game loop
while 1:
    remaining_turns = int(input())

    ans = ""

    if y < ly :
        y += 1
        ans += "S" 
    elif y > ly :
        y -= 1
        ans += "N" 
            
    if x < lx :
        x += 1
        ans += "E" 
    elif x > lx :
        x -= 1
        ans += "W" 
            
    print(ans)
