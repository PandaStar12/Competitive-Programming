#include <iostream>
using namespace std;
int t;
char tab[10];
float a;
 
int main ()
{
        std::cin >> t;
        
        while(t--)
        {
            std::cin >> a;
            void *k = (float*) &a;
            sprintf ( tab, "%08x\n", *((int*)k) );
            
            if (tab[0]!='0') cout << tab[0];
            cout << tab[1] << " ";
            if (tab[2]!='0') cout << tab[2];
            cout << tab[3] << " ";
            if (tab[4]!='0') cout << tab[4];
            cout << tab[5] << " ";
            if (tab[6]!='0') cout << tab[6];
            cout << tab[7] << endl;
        }
        
 	std::cin.ignore();
 	getchar();
        return 0;
}
