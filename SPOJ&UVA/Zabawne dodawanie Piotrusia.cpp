#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

bool Czy_Palindrom( int Liczba )
{
    ostringstream ss;
    ss << Liczba;
    string s = ss.str();
     
    int n = s.length();
    int i = n / 2;
    
    while (i-- > 0)
    {
        if (s[i] != s[n - i - 1]) return false;
    }
    
    return true;
}

string Reverse( int Liczba )
{   
    ostringstream ss;
    ss << Liczba;
    string ABC = ss.str(); 
    reverse( ABC.begin(), ABC.end() );
    return ABC;       
}

int main()
{
    unsigned int t, Liczba, POM;
    
    cin >> t;
    
    while(t--)
    {
              cin >> Liczba;
              
              if( Liczba < 10 ) std::cout << Liczba << " 0" << std::endl;
              else
              {
                     int Ilosc = 0;
                  
                     while(Czy_Palindrom(Liczba) == false)
                     {
                           istringstream iss( Reverse(Liczba) );
                           iss >> POM;
                           Liczba = Liczba + POM;
                           Ilosc++;
                     }
                     
                     cout << Liczba << " " << Ilosc << endl;
                     
              }
    }

    return 0;
}
