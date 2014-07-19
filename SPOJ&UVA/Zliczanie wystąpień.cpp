#include <iostream>
 
int main() 
{
        int Szukana;
        
        while( std::cin >> Szukana )
        {
                int i, Wynik = 0, L;
                
                std::cin >> i;
        
                for( i; i > 0; i-- )
                {
                        std::cin >> L;
                        if( L == Szukana ) Wynik++;
                }
                
                std::cout << Wynik << std::endl;
        }       
        return 0;
}
