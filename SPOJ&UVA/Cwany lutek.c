#include <stdio.h>
 
int t, n, k, i;
 
int main()
{
        scanf("%d", &t);
   
        for( i=0; i < t; ++i )
        {
                scanf("%d %d", &n, &k);
                (n | k) == n ? printf("N\n") : printf("P\n");
        }
        
        return 0;
}
