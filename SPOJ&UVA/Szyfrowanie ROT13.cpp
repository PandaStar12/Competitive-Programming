#include <iostream>
 
int main()
{
    std::string Tekst;
    
    while( getline(std::cin, Tekst) )
    {
           for( unsigned int i = 0; i < Tekst.length(); i++ )
           {
                if( (Tekst[i] > 64) && (Tekst[i] < 91) ) // Duże Litery (ROT-13)
                {
                    if( Tekst[i] > 77 ) Tekst[i] = Tekst[i] - 13;
                    else Tekst[i] = Tekst[i] + 13;
                }
                else if( (Tekst[i] > 96) && (Tekst[i] < 123) ) // Małe litery (ROT-13)
                {
                     if( Tekst[i] > 109 ) Tekst[i] = Tekst[i] - 13;
                     else Tekst[i] = Tekst[i] + 13;
                }
                else if( (Tekst[i] > 47) && (Tekst[i] < 58) ) // Cyfry ( ROT-5)
                {
                     if( Tekst[i] > 52 ) Tekst[i] = Tekst[i] - 5;
                     else Tekst[i] = Tekst[i] + 5;
                }
           }
           
           std::cout << Tekst << std::endl;
    }
    
    return 0;
}
