#include <stdio.h>
#define MAX 270000

inline void PrintInteger(unsigned int n)
{
        if(n == 0) return;
        else
        {
                PrintInteger( n/10 );
                fputc_unlocked( (n%10)+48, stdout);
        }
}

inline void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int Stos[MAX], Size, i, t, n, Wynik, POM;
 
int main()
{
    readINT(&t);
    
    while( i < t )
    {
        readINT(&POM);
        readINT(&n);
        
        while ( (Size != 0) && ( Stos[Size-1] > n ) )
        {
                Size--;
        }
        
        if ( (Size == 0 ) || ( Stos[Size-1] < n ) )
        {
                Wynik++; 
                Stos[Size++] = n;
        }
        
        i++;
    }
    
    PrintInteger(Wynik);

    return 0;
}
