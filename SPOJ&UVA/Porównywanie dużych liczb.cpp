#include <iostream>
 
int main() 
{
        std::string a, znak, b;
        
        while( std::cin >> a >> znak >> b )
        {
                if( znak == "==" )
                {
                        if( a == b ) std::cout << "1" << std::endl;
                                else std::cout << "0" << std::endl;
                }
                else if( znak == "!=" )
                {
                        if( a != b ) std::cout << "1" << std::endl;
                        else std::cout << "0" << std::endl;
                }
                else if( znak == ">=" )
                {
                        if( a == b) std::cout << "1" << std::endl;
                        else if( a.length() > b.length() ) std::cout << "1" << std::endl;
                        else if( a.length() < b.length() ) std::cout << "0" << std::endl;
                        else if ( a > b ) std::cout << "1" << std::endl;
                        else std::cout << "0" << std::endl;
                }
                else
                {
                        if( a == b) std::cout << "1" << std::endl;
                        else if( a.length() > b.length() ) std::cout << "0" << std::endl;
                        else if( a.length() < b.length() ) std::cout << "1" << std::endl;
                        else if ( a < b ) std::cout << "1" << std::endl;
                        else std::cout << "0" << std::endl;
                }
        }
                
        return 0;
}

