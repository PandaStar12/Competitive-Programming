#include <stdio.h>
#include <math.h>
 
int H, M, t;
 
void Chaos()
{
        if( H > 10 )
        {
                 if( H == 24 ) puts("00:00");
                 else
                 {
                        int Palindrom = floor(H/10)+(H%10*10);
                        
                        if( (M < Palindrom) && (Palindrom < 60) )
                        {
                                printf("%.2d:%.2d\n", H, Palindrom );
                        }
                        else
                        {
                                H++;
                                M = 0;
                                Chaos();
                        }
                 }
        }
        else if( H == 10 )
        {
                if( M == 0 ) puts("10:01");
                else puts("11:11");
        }
        else if( H == 0 )
        {
                M++;
                
                if( M < 10 ) printf("00:%.2d\n", M );
                else
                {
                        int Palindrom = 11;
                
                        while( Palindrom < M ) Palindrom += 11;
                        
                        if( Palindrom < 60 ) 
                        {
                                printf("00:%.2d\n", Palindrom );
                        }
                        else
                        {
                                  M = 0;
                                    H++;
                                Chaos();
                        }
                }
        }
        else    // 0 < H < 12
        {
                int Palindrom = H;
                
                while( Palindrom <= M ) Palindrom += 10;
        
                if( Palindrom < 60 ) 
                {
                        printf("%.2d:%.2d\n", H, Palindrom );
                }
                else
                {
                          M = 0;
                            H++;
                        Chaos();
                }       
                
        }
}
 
int main(void) 
{
        scanf("%d", &t);
        
        while(t--)
        {
                scanf("%d:%d", &H, &M);
                Chaos();
        }
                         
        return 0;
}

