#include <stdio.h>
 
char Znak[20] = "0123456789ABCDEF";
char W[1000];
 
inline void readINT(unsigned int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
void Zamiana(unsigned int L, int S)
{        
        int i = 0;
 
        while( L > 0 )
        {
                W[i] = Znak[L%S];
                L = L/S;
                i++;
        }        
        
        while(i--) fputc_unlocked(W[i], stdout);
}
 
int main()
{
    unsigned int t, Liczba;
   
    readINT(&t);
   
    while(t--)
    {
              readINT(&Liczba);
              Zamiana(Liczba,16);
              fputc_unlocked(' ', stdout);
              Zamiana(Liczba,11);
              fputc_unlocked('\n', stdout);
    }
    
    return 0;
}
