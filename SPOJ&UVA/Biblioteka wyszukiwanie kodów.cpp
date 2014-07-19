#include <cstdio>
#include <string>
#include <tr1/unordered_map>
 
char Str[10];
 
inline void readINT(unsigned int *n)   // Szybkie wczytywanie by Rafa� Nowak
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
inline void PrintINT(int a)
{
        if(a==0) return;
        else
        {
                PrintINT(a/10);
                fputc_unlocked( (a%10)+48, stdout);
        }
}
 
int main()
{
        std::tr1::unordered_map<std::string, int> Mapa; 
        
        unsigned int N, K;
        readINT(&N);
        readINT(&K);
 
        while(N--)
        {
                gets(Str);
                ++Mapa[Str];
        }
        
        while(K--)
        {
                gets(Str);
                
                if( Mapa[Str] == 0 )
                {
                        fputc_unlocked(66, stdout); // 'B'
                        fputc_unlocked(82, stdout); // 'R'
                        fputc_unlocked(65, stdout); // 'A'
                        fputc_unlocked(75, stdout); // 'K'
                }
                else PrintINT(Mapa[Str]);
                
                fputc_unlocked(10, stdout); // '\n'
        }
 
        return 0;
}
