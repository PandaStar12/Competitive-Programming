#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int n, m, k, x;

vector<int> V[120];
bool Color[120];
char s[10000];

bool Check(int i)
{
    int size = V[i].size();

    if(size == 0 || size == 1) return true;
    else if(size == 2)
    {
        if(Color[V[i][0]] != Color[V[i][1]]) return true;
        else return false;
    }
    else
    {
        if(Color[V[i][0]] == Color[V[i][1]] && Color[V[i][1]] == Color[V[i][2]]) return false;
        else return true;
    }
}

bool Rozw(int n, int m)
{
    for(int i = 0; i < (1<<n); i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i & (1<<j)) Color[j] = true;
            else Color[j] = false;
        }

        int sum = 0;

        for(int j = 0; j < m; j++)
        {
            int pom = (int)Check(j);

            if(pom == 0) break;
            else sum += 1;
        }

        if(sum == m) return true;
        else continue;
    }

    return false;
}

int main()
{
    cin >> k;

    while(k-- && cin >> n >> m)
    {
        gets(s);

        for(int i = 0; i < m; i++)
        {
            V[i].clear(); gets(s); char *ptr = strtok(s, " ");
            do
            {
                sscanf(ptr, " %d", &x); V[i].push_back(x-1);
            }
            while( (ptr = strtok(NULL, " ")) != NULL );
        }

        if(Rozw(n, m) == true) printf("Y");
        else printf("N");
    }

    return 0;
}