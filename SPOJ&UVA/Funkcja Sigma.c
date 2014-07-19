#include <stdio.h>
#include <math.h>
#define LL unsigned int
 
inline void readLL(LL *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10LL + (c-'0'); c=getc_unlocked(stdin);}
}
 
LL t,i;
 
int main(void) 
{
        readLL(&t);
        
        while(t--)
        {
                LL L, Sigma=0, P;
                
                readLL(&L);
                
                if( L == 1 )
                {
                	fputc_unlocked('1', stdout);
                	fputc_unlocked('\n',stdout);
                }
                else
                {   
                        P = ceil( sqrt(L) );
                                            
                        for( i = 1; i < P; i++ )
                        {
                                if( L % i == 0 )
                                {
                                        Sigma += i;
                                        Sigma += (L/i);
                                }
                        }
                        
                        printf("%u\n", Sigma);
                }       
        }
                 
        return 0;
}
