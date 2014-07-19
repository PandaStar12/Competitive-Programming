#include <stdio.h>
 
int main() 
{
        long t, n, x, y, i;
        scanf("%ld", &t);
 
        while(t--)
        {
        	scanf("%ld %ld %ld", &n, &x, &y);
                
                for( i = x; i < n; i += x)
                {
                        if( i%y != 0 ) printf("%d ", i);
                }
 
                printf("\n");
        }
        
        return 0;
}
