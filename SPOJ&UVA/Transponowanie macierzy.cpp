#include <iostream>
 
int main() 
{
        int k,w;
        std::ios_base::sync_with_stdio(false);
        std::cin >> k >> w;
        std::string Tablica[w];
        
        while(k--)
        {
                for(int i = 0; i < w; i++)
                {
                        std::string str;
                        std::cin >> str;
                        Tablica[i] = Tablica[i] + str + " ";
                }
        }
        
        for( int i = 0; i < w; i++)
        {
                std::cout << Tablica[i] << std::endl;
        }
        
        return 0;
}
