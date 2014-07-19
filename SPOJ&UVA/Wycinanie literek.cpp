#include <iostream>
 
int main() 
{
        char c;
        std::string s;
        
        while( std::cin >> c )
        {
                std::cin >> s;
                
                for(unsigned int i = 0; i < s.length(); i++ )
                {
                        if( s[i] != c ) std::cout << s[i];
                }
 
                std::cout << std::endl;
        }
        
        return 0;
}

