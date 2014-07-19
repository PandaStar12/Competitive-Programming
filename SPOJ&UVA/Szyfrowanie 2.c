#include <iostream>
 
bool kod(int n, int k);
 
int t[25];
 
std::string Wynik;
 
int main()
{        
        int test, n;
        
        std::ios_base::sync_with_stdio(false);
        
        std::cin >> test;
 
        while(test--)
        {
                std::cin >> n;
 
                for(int i = 0; i < n; i++)
                {
                       std::cin >> t[i];
                }
 
                int lp = 0;
 
                if(kod(n, 127))
                {
                        Wynik += "127 ";
                        
                        for(int i = 0; i < n; i++)
                        {
                                Wynik += (char) (t[i] % 127);
                        }
                        
                        lp++;
                }
 
                if(kod(n, 131))
                {
                        Wynik+= "131 ";
                        
                        for(int i = 0; i < n; i++)
                        {
                                Wynik += (char) (t[i] % 131);
                        }
 
                        lp++;
                }
 
                if(kod(n, 137))
                {
                        Wynik += "137 ";
                        
                        for(int i = 0; i < n; i++)
                        {
                                Wynik += (char) (t[i] % 137);
                        }
                        
                        lp++;
                }
 
                if(kod(n, 139))
                {
                        Wynik += "139 ";
                        for(int i = 0; i < n; i++)
                        {
                                Wynik += (char) (t[i] % 139);
                        }
 
                        lp++;
                }
 
                if(kod(n, 149))
                {
                        Wynik += "149 ";
                        
                        for(int i = 0; i < n; i++)
                        {
                                Wynik += (char) (t[i] % 149);
                        }
 
                        lp++;
                }
 
                if( (lp == 0) || (lp > 1) ) std::cout << "NIECZYTELNE\n";
                else std::cout << Wynik << "\n";
                
                Wynik = "";
        }
 
        return 0;
}
 
bool kod(int n, int k)
{
        for(int i = 0; i < n; i++)
        {
                if(t[i] % k < (int) 'A' || t[i] % k > (int) 'Z')
                        return false;
        }
        return true;
}
