#include <iostream>
 
int main() 
{
        std::string Tekst;
 
        while( getline(std::cin, Tekst) )
        {       
                int Liczby = 0, Slowa = 0;
 
                Tekst = Tekst + " ";
                
                for(unsigned int i = 0; i < Tekst.length(); i++)
                {       
                        if( Tekst[i] == ' ' )
                        {
                                if( Tekst[i-1] < 58 ) Liczby++;
                                else Slowa++;
                        }
                }
 
                std::cout << Liczby << " " << Slowa << std::endl;
 
        }
        
        return 0;
}
