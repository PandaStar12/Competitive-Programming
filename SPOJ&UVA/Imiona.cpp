#include <cstdio>
#include <string>
#include <tr1/unordered_map>
#include <vector>
#include <algorithm>
 
class PAIR
{
        public :
        
        int i;
        std::string t;
        
        PAIR( std::string a, int b )
        {
                i = b;
                t = a;
        }       
        
};
 
bool Sortowanie( PAIR A, PAIR B )
{
        if( A.i > B.i ) return true;
        else
        {
                if( A.i == B.i ) if( A.t < B.t ) return true;
        }
 
        return false;
}
 
std::vector<PAIR> Wektor; 
char Imie[22];
char Nazwisko[22];
int Numer, i;
 
int main()
{
        std::tr1::unordered_map<std::string, int> Mapa; 
        
        
        while( (scanf("%d.%s %s", &Numer, Nazwisko, Imie)) != EOF )
        {
                for( i = 0; i < 22; ++i )
                {
                        if( Imie[i] < 33 ) break;
                        else if( Imie[i] > 96 ) Imie[i] -= 32;
                }
                
                ++Mapa[Imie];
        }
        
        std::tr1::unordered_map< std::string, int >::iterator MLEKO;
        
        for( MLEKO = Mapa.begin(); MLEKO != Mapa.end(); ++MLEKO )
        {
                Wektor.push_back( PAIR( (*MLEKO).first, (*MLEKO).second) );
        }
 
        std::sort( Wektor.begin(), Wektor.end(), Sortowanie);
        
        for( i = 0; i < Wektor.size(); ++i ) 
        {
                printf("%s %d\n", Wektor[i].t.c_str(), Wektor[i].i);
        } 
 
        return 0;
}

