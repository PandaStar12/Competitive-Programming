#include <iostream>
 
int main() 
{
        int a,b;
        char znak;
        
        while( std::cin >> znak )
        {
                     std::cin >> a >> b;
                     if( znak == '+' ) std::cout << a+b << std::endl;
                else if( znak == '-' ) std::cout << a-b << std::endl;
                else if( znak == '*' ) std::cout << a*b << std::endl;
                else if( znak == '/' ) std::cout << a/b << std::endl;
                else std::cout << a%b << std::endl;             
        }
 
        return 0;
}

