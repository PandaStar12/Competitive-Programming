#include <iostream>
 
int Cyfra( char znak ) 
{
    return int(znak-48);
}
 
int main() 
{
        int N;
        std::cin >> N;
 
        while(N--)
        {
                std::string Tekst;
                std::cin >> Tekst;
 
                int Wynik = Cyfra(Tekst[0]);
 
                for(int i = 2; i < Tekst.length(); i = i+2)
                {
                        if( Tekst[i-1] == '+' ) Wynik += Cyfra(Tekst[i]);
                        else Wynik = Wynik - Cyfra(Tekst[i]);
                }
 
                std::cout << Wynik << std::endl;
 
                
        }
        
        return 0;
}

