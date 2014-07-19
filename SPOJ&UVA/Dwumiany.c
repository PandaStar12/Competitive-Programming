#include <stdio.h>

void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
double Newton(int n, int k)      
{
        double Wynik = 1;
        int i;
        
        for(i = 1; i <= k; i++)       
        {
                Wynik = Wynik * (n-i+1) / i;
        }
        
        return Wynik;
}
 
int main()      
{
        int t, a, b;
        
        readINT(&t);
        
        while(t--)        
        {
                readINT(&a);
                readINT(&b);
                printf( "%.0lf\n", Newton(a,b) );
        }       
        
        return 0;
}


