#include <stdio.h>
 
void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main() 
{
        int t,i,j;
        
        readINT(&t);
        
        if( t == 0 ) printf("0");
        else if( t < 3 ) printf("NIE");
        else
        {
                if( t % 2 == 0 ) 
                {
                        i = t; 
                        j = t-1;
                }
                else 
                {
                        i = t-1; 
                        j = t;
                }
                
                for( i; i >= 0; i=i-2)
                {
                        printf("%d ", i);
                }
                
                for( j; j >= 0; j=j-2)
                {
                        printf("%d ", j);
                }
        }
                 
        return 0;
}
