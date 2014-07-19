#include <iostream>
 
int main() 
{
        int Liczba;
        long long Suma = 0, Sum = 0;
        
        while(std::cin >> Liczba)
        {
                if( Liczba == 0 )
                {
                        std::cout << Sum << std::endl;
                        Sum = 0;
                }
                else
                {
                        Sum  += Liczba;
                        Suma += Liczba;
                }
        }
        
        std::cout << Suma << std::endl;
                
        return 0;
}

