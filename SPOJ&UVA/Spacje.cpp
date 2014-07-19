#include <iostream>
 
int main() 
{
        std::string Tekst;
 
        while( getline(std::cin, Tekst) )
        {
                for( unsigned int i = 0; i < Tekst.length(); i++ )
                {
                        if( Tekst[i] == ' ' ) 
                        {
                                Tekst[i] = 0;
                                Tekst[i+1] = toupper(Tekst[i+1]);
                        }
                        
                }
                
                for( unsigned int i = 0; i < Tekst.length(); i++) if(Tekst[i] != 0) std::cout << Tekst[i];
                std::cout << std::endl;
                
        }
                
        return 0;
}
