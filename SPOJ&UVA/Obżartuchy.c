#include <stdio.h>
#include <math.h>

void readUI(unsigned int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10u + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main() 
{
        unsigned int t;
        readUI(&t);
           
        while(t--)
        {
                unsigned int lo,lc, czas;
                float suma = 0;
                
                readUI(&lo); 
                readUI(&lc);
                
                while(lo--)
                {
                        readUI(&czas);
                        suma += 86400/czas;
                }
                
                printf("%.0f\n", ceil(suma/lc) );           
        }
        
        return 0;
}



