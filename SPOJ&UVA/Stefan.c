#include <stdio.h>
 
long long int L[100000];
long long int t, Wynik=0, i, W=0;
 
 
int main() 
{
        scanf("%lld", &t);
 
        for( i = 0; i < t; i++ )
        {
                scanf("%lld", &L[i]);
        }
         
        for( i = 0; i < t; i++ )
        {
                if( Wynik > 0 )
                {
                        Wynik += L[i];
                }
                else 
                {
                        Wynik = L[i];
                }       
                
                if( Wynik > W ) W = Wynik; 
        }       
        
        printf("%lld", W);
        
        return 0;
}

