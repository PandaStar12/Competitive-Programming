next_token = string.gmatch(io.read(), "[^%s]+")
lx = tonumber(next_token())
ly = tonumber(next_token())
x = tonumber(next_token())
y = tonumber(next_token())
ans = ""

while true do
    remainingTurns = tonumber(io.read())
        
    ans = ""
    
    if (y < ly) then
        y = y + 1
        ans = ans.."S"
        
    elseif (y > ly) then
        y = y - 1
        ans = ans.."N"
    end
                        
    if(x < lx) then
        x = x + 1
        ans = ans.."E"
        
    elseif(x > lx) then
        x = x - 1
        ans = ans.."W"
    end

    print(ans)
    
end
