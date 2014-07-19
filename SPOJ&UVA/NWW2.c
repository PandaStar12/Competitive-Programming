#include <stdio.h>
#define LL unsigned long long
 
inline void PrintINT(unsigned long long a)
{
        if(a==0) return;
        else
        {
                PrintINT(a/10);
                fputc_unlocked( (a%10)+48, stdout);
        }
}
 
inline void readLL(LL *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10LL + (c-'0'); c=fgetc_unlocked(stdin);}
} 
 
LL Nwd(LL a, LL b)
{
    while (b!=0)
    {
        LL c=a%b;
        a=b;
        b=c;
    }
    return a;
}
 
 
int main()
{
    LL t;
    readLL(&t);
    
    while(t--)
    {
        LL Wynik = 1, Pom, Ilosc;
        
        readLL(&Ilosc);
        
        while(Ilosc--)
        {
            readLL(&Pom);
            Wynik = Wynik / Nwd(Wynik,Pom) * Pom;
        }
        
        PrintINT(Wynik);
        fputc_unlocked('\n', stdout);   
    }
    
    return 0;
}
