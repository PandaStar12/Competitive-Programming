#include <cstdio>
#include <algorithm>
using namespace std;

int n, m, temp, x, j=-1;
int tab[1000000];

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
            {
            scanf("%d", &temp);
            tab[temp]++;
            }
    while (x<m)
    {
          j++;
          if (tab[j]!=0)
             x+=tab[j];
    }
    printf("%d", j);
    return 0;
}
