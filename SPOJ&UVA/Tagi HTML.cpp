#include <iostream>
 
int main() 
{
        std::string Tekst;
 
        while( getline(std::cin, Tekst) )
        {
                for( unsigned int i = 0 ; i < Tekst.length(); i++ )
                {
                        if( Tekst[i] == '<' )
                        {
                                while( Tekst[i] != '>' )
                                {
                                        i++;
                                        Tekst[i] = toupper(Tekst[i]);
                                }
                        }
                }
                
                std::cout << Tekst << std::endl;
        }
        
        return 0;
}

