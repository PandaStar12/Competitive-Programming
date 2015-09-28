import sys
import math

lx, ly, x, y = [int(i) for i in raw_input().split()]

while 1:
    remaining_turns = int(raw_input())

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
        
    print ans
