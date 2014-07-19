#include <iostream>
#include <vector>
#include <algorithm>
std::vector<std::string> Wektor;

bool Sortowanie(std::string A, std::string B )
{
    if( A.length() > B.length() ) return true;
    else if( A.length() == B.length() )
    {
        if( A < B ) return false;
        else return true;
    }
    else return false;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::string Tekst;
    int T; std::cin >> T;

    while(T--)
    {
        std::cin >> Tekst;
        Wektor.push_back(Tekst);
    }

    std::sort( Wektor.begin(), Wektor.end(), Sortowanie );
    for( int i = Wektor.size()-1; i >= 0; i-- ) std::cout << Wektor[i] << "\n";

    return 0;
} 