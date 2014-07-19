#include <stdio.h>
 
int main(void) 
{
        int x,y,r,t,a,b, f,g;    
        scanf("%d %d %d %d", &x, &y, &r, &t);
        
        while(t--)
        {
                scanf("%d %d", &a, &b);
                
                f = a-x;
                g = b-y;
                
                if( f*f + g*g == r*r ) printf("E\n");
                else if( f*f + g*g < r*r ) printf("I\n");
                else printf("O\n");
        }
        
        return 0;
}
