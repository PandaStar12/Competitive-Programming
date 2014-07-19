#include <iostream>
 
using namespace std;
 
int main() 
{
        string Tekst;
 
        while( getline(cin, Tekst) )
        {       
                for(int i = 0; i < Tekst.length(); i++)
                {
                                if( Tekst[i] > 87 )
                                {
                                        if(Tekst[i] == 'X') Tekst[i] = 'A';
                                        if(Tekst[i] == 'Y') Tekst[i] = 'B';
                                        if(Tekst[i] == 'Z') Tekst[i] = 'C';
 
                                }
                                else if( Tekst[i] >= 65 ) Tekst[i] = Tekst[i] + 3;
                }
 
                for(int i = 0; i < Tekst.length(); i++)
                {
			cout << Tekst[i];
                }
 
                cout << endl;
        }
 
        return 0;
}
