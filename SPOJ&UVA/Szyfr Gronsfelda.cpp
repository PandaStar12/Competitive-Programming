#include <iostream>
#include <sstream>
 
std::string Wyraz, Klucz, Procedura;    
long long int IntKlucz;
char Wynik;
 
int main()
{
        std::ios_base::sync_with_stdio(false);
        
        std::cin >> Procedura >> IntKlucz >> Wyraz;
        
        std::stringstream ss;
        ss << IntKlucz;
        ss >> Klucz;
        
        if( Procedura == "DESZYFRUJ" )
        {
                int j=0, W;
                
                for(int i=0; i < Wyraz.length(); i++)
                {
                        W = Wyraz[i];
                        if( W-Klucz[j]+48>=65) Wynik = ( W - Klucz[j] + 48 );
                        else Wynik = ( W - Klucz[j] + 74 );
                        std::cout << Wynik;
                        j++;
                        if( j >= Klucz.length() ) j = 0;           
                }
                
                std::cout << "\n";
        }
        else // Szyfruj
        {
                int j=0, W;
                
                for( int i = 0; i < Wyraz.length(); i++ )
                {
                        W = Wyraz[i];
                        if( (W+Klucz[j]-48) <= 90 ) Wynik = ( W + Klucz[j] - 48 );
                        else Wynik = (  W + Klucz[j] - 74 );
                        std::cout << Wynik;
                        j++;
                        if( j >= Klucz.length() ) j = 0;           
                }
                
                std::cout << "\n";             
        }
        
        
        return 0;
}
