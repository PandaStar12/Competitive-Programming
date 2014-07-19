#include <iostream>
 
int Tablica[10] = { 666, 666, 666, 666, 666, 666, 666, 666, 666, 666 };
 
int main()
{
    char znak;
    int liczba;
    
    while(std::cin >> znak)
    {
                   if( znak == '+' )
                   {
                       std::cin >> liczba;
                       
                       bool Zmiana = false;
                       
                       for( int i = 9; i >= 0; i-- )
                       {
                            if( Tablica[i] == 666 ) { Tablica[i] = liczba; Zmiana = true; break; }                            
                       }
                       
                       if(Zmiana == false) std::cout << ":(" << std::endl;   
                       else std::cout << ":)" << std::endl;  
                   }
                   
                   else 
                   {
                        bool Zmiana = false;
                        
                        for( int i = 0; i < 10; i++ ) 
                        { 
                             if( Tablica[i] != 666 )
                             { 
                                std::cout << Tablica[i] << std::endl;
                                Tablica[i] = 666;
                                Zmiana = true;
                                break;
                             }
                        }
                        
                        if( Zmiana == false ) std::cout << ":(" << std::endl;
                   }
    }
    
    return 0;
}
