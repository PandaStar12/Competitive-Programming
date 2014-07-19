#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, b, c, x, y, z;
    int d, e, f; // zmienne tymczasowe
 
    scanf("%d %d %d %d",&n, &x, &y, &z);
    while(--n) // --n, a nie n--, bo wczytaliśmy pierwszą trójkę poza pętlą
    {
    		scanf("%d %d %d", &a, &b, &c);

            d = a+min(y, z); e = b+min(x, z); f = c+min(x, y);
            x = d; y = e; z = f; // aktualizuj x, y, z
    }
    printf("%d\n", min(x, min(y, z)));
}
