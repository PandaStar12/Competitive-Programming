#include <stdio.h>
 
int main() 
{
        float a, b, c, x;
        scanf("%f %f %f", &a, &b, &c );
        
        if( a == 0 )
        {
                if( c == b ) puts("NWR");
                else puts("BR");
        }
        else
        {
                x = (c-b) / a;
                printf("%.2f", x);
        }
        
        return 0;
}
