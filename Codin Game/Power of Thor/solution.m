#include <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    int lx; // the X position of the light of power
    int ly; // the Y position of the light of power
    int x; // Thor's starting X position
    int y; // Thor's starting Y position
    scanf("%d%d%d%d", &lx, &ly, &x, &y);

    while (1) {
        int remainingTurns;
        scanf("%d", &remainingTurns);

        if (y < ly) {
            printf([@"S" UTF8String]);
            y++;
        }   
        else if (y > ly) {
            y--; printf([@"N" UTF8String]);
        }   
                            
        if(x < lx) {
            x++; printf([@"E" UTF8String]);
        }   
        else if(x > lx) {
            x--; printf([@"W" UTF8String]);
        }


        printf([@"\n" UTF8String]); // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}
