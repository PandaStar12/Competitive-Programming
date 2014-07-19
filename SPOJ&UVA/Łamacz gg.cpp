#include <iostream>
 
int Trans1(char Znak)
{
        return (int(Znak)) - 65;
}
 
int Trans2(char Znak)
{
        return (int(Znak) - 65)*16;
}
 
std::string Zamien( std::string A )
{
        std::string Wynik = "";
        
        for( int i = 0; i < 20; i = i+2 )
        {
                Wynik += char( Trans1(A[i])+Trans2(A[i+1]) );           
        }
        
        return Wynik;
}
 
int main() 
{
        std::string Tekst;
 
        while(std::cin >> Tekst)
        {
                std::cout << Zamien(Tekst) << std::endl;
        }       
        
        return 0;
}

