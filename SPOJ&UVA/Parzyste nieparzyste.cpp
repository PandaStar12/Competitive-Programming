#include <iostream>
#include <sstream>
 
int main() 
{
        std::ios_base::sync_with_stdio(false);
        
        int t;
        std::cin >> t;
 
        while(t--)
        {
                std::string t1 = "", t2 = "";
                int liczby;
                std::cin >> liczby;
                
                for(int i = 1; i <= liczby; i++)
                {
                        int x;
                        std::cin >> x;
                        
                        std::ostringstream ss;
                        ss << x;
                        std::string str = ss.str();
                        
                        if(i % 2 > 0) t2 += str + " ";
                        else t1 += str + " ";
                }
                
                std::cout << t1 << t2 << "\n";
        }
        
        return 0;
}

