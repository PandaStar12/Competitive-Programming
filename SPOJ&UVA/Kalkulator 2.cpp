#include <iostream>
 
int Tab[10];
 
void Wykonaj(char znak, int &a, int &b)
{
        if(znak == 'z') Tab[a] = b;
        if(znak == '+') std::cout << Tab[a] + Tab[b] << std::endl;
        if(znak == '-') std::cout << Tab[a] - Tab[b] << std::endl;
        if(znak == '*') std::cout << Tab[a] * Tab[b] << std::endl;
        if(znak == '/') std::cout << Tab[a] / Tab[b] << std::endl;
        if(znak == '%') std::cout << Tab[a] % Tab[b] << std::endl;
}
 
int main() 
{
        char c;
        int i1, i2;
 
        while( std::cin >> c )
        {
                std::cin >> i1 >> i2;
                Wykonaj(c, i1, i2);
        }
 
        return 0;
}
