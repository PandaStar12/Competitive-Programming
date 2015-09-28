#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lx, ly, x, y;
    scanf("%d %d %d %d", &lx, &ly, &x, &y);

    // game loop
    while (1) {
            int remainingTurns;
            scanf("%d", &remainingTurns);

        	if (y < ly) {
                y++; printf("S");
        	}
        	else if (y > ly) {
                y--; printf("N");
            }
            
            if(x < lx) {
                x++; printf("E");
            }
            else if(x > lx) {
                x--; printf("W");
            }
            
            printf("\n");
    }

    return 0;
}
