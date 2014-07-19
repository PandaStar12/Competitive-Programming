#include <stdio.h>
 
int main() 
{
        int t;
        scanf("%d", &t);
        
        while(t--)
        {
                long long int a;
                scanf("%lld", &a);
 
                if( (a==0) || (a==1) ) puts("0 1");
                else if( a == 2 )      puts("0 2");
                else if( a == 3 )      puts("0 6");   
                else if( a == 4)       puts("2 4");
                else if( ( a == 5) || ( a == 8) || ( a == 6 ) ) puts("2 0");
                else if( a == 7)        puts("4 0");
                else if( a == 9)        puts("8 0");
                else                    puts("0 0");
        }       
        
        return 0;
}
