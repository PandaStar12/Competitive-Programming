# Similar to bsmr

read lx ly x y

while true; do
    read Lines
    
    MX=""
    MY=""
    A=$(($lx-$x))
    B=$(($ly-$y))
    
    if [ $B -lt 0 ]; then
        if [ $y -lt 18 ]; then
          y--
            MY="N"
          
        fi
    elif [ $B -gt 0 -a $y -ge 0 ]; then
                    y=$(($y+1))
          MY="S"

    fi
    
    if [ $A -lt 0 ]; then
        if [ $x -lt 40 ]; then
            x--
            MX="W"
        fi
    elif [ $A -gt 0 -a $x -ge 0 ]; then
            x++
            MX="E"
    fi

    echo "${MY}${MX}"
done

