#include <stdio.h>
 
int NWD( int a, int b )
{
        while( a != b )
        {
                if( a > b )  a = a-b;
                else b = b - a;
        }
 
        return a;
}
 
int main() 
{
        int t, g1, g2;
        
        scanf("%d", &t);
 
        while(t--)
        {
                scanf("%d %d", &g1, &g2);
                printf( "%d\n", (g1*g2) / NWD(g1,g2) );
        }
 
        return 0;
}
