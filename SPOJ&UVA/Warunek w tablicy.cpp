#include <iostream>
#include <vector>
 
int main() 
{
	std::ios_base::sync_with_stdio(false);
        long int t, n, warunek;
        std::vector<long int> Wektor;
        char znak;
        
        std::cin >> t;
                
        while(t--)
        {
                std::cin >> n;
                Wektor.push_back(n);
        }
        
        std::cin >> znak >> warunek;
        
        if( znak == '<' )
        {
                for( int i = 0; i < Wektor.size(); i++ )
                {
                        if( Wektor[i] < warunek ) std::cout << Wektor[i] << std::endl;
                }
        }
        else
        {
                for( int i = 0; i < Wektor.size(); i++ )
                {
                        if( Wektor[i] > warunek ) std::cout << Wektor[i] << std::endl;
                }
        }
                        
        return 0;
}
