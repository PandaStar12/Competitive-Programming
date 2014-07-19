#include <cstdio>
#include <cmath>
 
int main() 
{
        long long Gosc;
 
        while( (scanf("%lld", &Gosc)) != EOF )
        {
                long long Wynik = ceil(sqrt(2*Gosc-1.75)-0.5);
                printf("%lld\n", Wynik);
        }       
        return 0;
}

