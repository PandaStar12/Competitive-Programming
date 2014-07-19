#include <stdio.h>
 
void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main() 
{
        int t, n, s;
        
        readINT(&t);
        
        while(t--)
        {
                readINT(&n);
                
                int Wynik = n-1;
        
                while(n--)
                {
                        readINT(&s);
                        Wynik += s;
                }
                
                printf("%d\n", Wynik);
                
        }       
        
        return 0;
}
