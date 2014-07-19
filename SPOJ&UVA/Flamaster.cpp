#include <iostream>
 
int main() 
{
        int t;
        std::cin >> t;
 
        while(t--)
        {
                std::string ABC; // Tekst
                std::cin >> ABC;        
                
                int Licznik = 1, i;
                
                for( i = 1; i < ABC.length(); i++ )
                {
                        if( ABC[i] != ABC[i-1] )
                        {
                                if(Licznik > 2) std::cout << ABC[i-1] << Licznik;
                                else if( Licznik == 2) std::cout << ABC[i-1] << ABC[i-1];
                                else std::cout << ABC[i-1];     
                                
                                Licznik = 1;
                        }               
                        else Licznik++;
                }
                
                if(Licznik > 2) std::cout << ABC[i-1] << Licznik;
                else if( Licznik == 2) std::cout << ABC[i-1] << ABC[i-1];
                else std::cout << ABC[i-1]; 
                
                std::cout << "\n";
 
        }
        
        return 0;
}

