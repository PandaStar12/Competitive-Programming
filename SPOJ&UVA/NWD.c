#include <stdio.h>
 
int main()
{
        int a,b,t;
        
        scanf("%d", &t);
        
        while(t--)
        {
                scanf("%d %d", &a, &b);
                
                while( a > 0 )
                {
                        a = a % b;
                        b = b - a;
                } 
                
                printf("%d\n", b);
        }
        
        return 0;
}
