#include <stdio.h>
 
int main() 
{
        int t;
 
        while( (scanf("%d",&t)) != EOF )
        {
                if( t == 42 ) break; 
                printf("%d\n", t);
        }
 
        return 0;
}

