/*
 * NIEBIESKIE KSIĄŻECZKI OI
 */

#include <cstdio>
#include <cstring>

const int MaxN = 1000000;

using namespace std;

int n, l;
int warstwa[MaxN];

int kto[MaxN], ile[MaxN];

void read() 
{
    int a, b;
    memset(kto, 0, sizeof(kto));
    memset(ile, 0, sizeof(ile));

    scanf("%d %d", &n, &l);
    for (int i = 1; i < n; ++i) 
	{
        scanf("%d %d", &a, &b);
        a--; b--;
        ile[a]++; kto[a] += b;
        ile[b]++; kto[b] += a;
    }
}

int main (void) 
{
    read();
    int res = 0, w = 0;
    for (int i = 0; i < n; ++i)
        if (ile[i] == 1)
            warstwa[w++] = i;

    while (w > 0) 
	{
        res += (2*l < w ? 2*l : w);
        int nw = 0;
        for (int i = 0; i < w; ++i) 
		{
            int x = warstwa[i];
            kto[ kto[x] ] -= x;
            if (--ile[ kto[x] ] == 1)
                warstwa[nw++] = kto[x];
        }
        w = nw;
    }

    printf("%d\n", res);
    return 0;
}
