#include <cstdio>
#include <tr1/unordered_map>
#include <vector>
 
inline void PrintINT(int a)
{
if(a==0) return;
else
{
PrintINT(a/10);
fputc_unlocked( (a%10)+48, stdout);
}
} 
 
inline void readINT(unsigned int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
unsigned int t, POM, POM2;
 
int main() 
{
        std::tr1::unordered_map<unsigned int, unsigned int> Mapa;
        std::vector<unsigned int> Wektor;
        
        readINT(&t);
        
        while(t--)
        {
                readINT(&POM);
                readINT(&POM2 );
                
                if( Mapa[POM] == 0 ) Wektor.push_back(POM);
                
                Mapa[POM] += POM2;      
        }
        
        PrintINT(Wektor.size()); 
        fputc_unlocked('\n', stdout);
        
        for( unsigned int i = 0; i < Wektor.size(); i++ )
        {
                PrintINT(Wektor[i]);
                fputc_unlocked(' ', stdout);
                PrintINT(Mapa[Wektor[i]]);
                fputc_unlocked('\n', stdout);
        }
        
        return 0;
}
