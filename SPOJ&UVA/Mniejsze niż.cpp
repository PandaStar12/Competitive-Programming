#include <cstdio>
#include <vector>
#include <algorithm>

void readINT( int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main() 
{
        std::vector<double> Liczby;
        int t, n, Wynik=0;
        double d;
        
        readINT(&t);
        
        while(t--)
        {
                scanf("%lf", &d);
                Liczby.push_back(d);
        }
 
        std::sort( Liczby.begin(), Liczby.end() );
        
        readINT(&n);
        
        while(n--)
        {
                scanf("%lf", &d);
                
                std::vector<double>::iterator low = lower_bound ( Liczby.begin(), Liczby.end(), d);
                
                 for(; low != Liczby.begin()-1; low-- ) Wynik++;
                
                printf("%d\n", Wynik-1);
                
                Wynik=0;
        }
        
        return 0;
}
