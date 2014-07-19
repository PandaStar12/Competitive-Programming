#include <stdio.h>
 
int main() 
{
        int t; 
 
        scanf("%d", &t);
 
        long v1, v2;
 
        while(t--)
        {
                scanf("%ld %ld", &v1, &v2 );
                printf("%ld\n", (2*v1*v2)/(v1+v2));
	}
                
        return 0;
}
