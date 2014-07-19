#include <iostream>
 
using namespace std;
 
string str( string a, string b )
{
        string Wynik = "";
        int l;
        
        if( a.length() > b.length() ) l = b.length();
        else l = a.length();
        
        for( int i = 0; i < l; i++ )
        {
                Wynik = Wynik + a[i] + b[i];
        }
        
        return Wynik;
}
 
int main() 
{
        int t;
        std::cin >> t;
        while(t--)
        {
                string a,b;
                std::cin >> a >> b;
                cout << str(a,b) << endl;
        }               
        return 0;
}

