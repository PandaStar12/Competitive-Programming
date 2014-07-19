#include <iostream>
 
int main() 
{
        int t,a,b,c;
        std::cin >> t;
        
        while(t)
        {
                std::cin >> a >> b >> c;
                if( a*c <= b ) std::cout << "yes" << std::endl;
                else std::cout << "no" << std::endl;
                t--;
        }       
        return 0;
}
