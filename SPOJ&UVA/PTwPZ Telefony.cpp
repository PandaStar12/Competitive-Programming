#include <iostream>
 
std::string Numer( std::string &T )
{
        std::string Wynik = "";
        
        for( int i = 0; i < T.length(); i++ )
        {
                if( (T[i] == 'A') || (T[i] == 'B') || (T[i] == 'C' ) ) Wynik += "2";
                else if( (T[i] == 'A') || (T[i] == 'B') || (T[i] == 'C' ) ) Wynik += "2";
                else if( (T[i] == 'D') || (T[i] == 'E') || (T[i] == 'F' ) ) Wynik += "3";
                else if( (T[i] == 'G') || (T[i] == 'H') || (T[i] == 'I' ) ) Wynik += "4";
                else if( (T[i] == 'J') || (T[i] == 'K') || (T[i] == 'L' ) ) Wynik += "5";
                else if( (T[i] == 'M') || (T[i] == 'N') || (T[i] == 'O' ) ) Wynik += "6";
                else if( (T[i] == 'P') || (T[i] == 'Q') || (T[i] == 'R' ) || (T[i] == 'S' ) ) Wynik += "7";
                else if( (T[i] == 'T') || (T[i] == 'U') || (T[i] == 'V' ) ) Wynik += "8";
                else if( (T[i] == 'W') || (T[i] == 'X') || (T[i] == 'Y' ) || (T[i] == 'Z' ) ) Wynik += "9";     
        }
        
        return Wynik;
 
}
 
int main() 
{
        int t;
 
        std::cin >> t;
 
        while(t--)
        {
                std::string Tekst;
                std::cin >> Tekst;
                std::cout << Numer(Tekst) << std::endl;
        }       
 
        return 0;
}

