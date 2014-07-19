#include <stdio.h>
#include <string.h>
 
int minimum(int x1, int x2, int x3)
{
if (x1 >= x2)
if (x2 >= x3)
return x3;
else
return x2;
else
if (x3 >= x1)
return x1;
 
return x3;
}
 
int Levenshtein(char *s, char *t) // kod na odległość edycyjną z algorytm.org
{
int d[1000][1000];
 
int i, j, m, n, cost;
 
m = strlen(s);
n = strlen(t);
 
for (i=0; i<=m; i++)
d[i][0] = i;
for (j=0; j<=n; j++)
d[0][j] = j;
 
for (i=1; i<=m; i++)
{
for (j=1; j<=n; j++)
{
if (s[i-1] == t[j-1])
cost = 0;
else
cost = 1;
 
d[i][j] = minimum(d[i-1][j] + 1,       /* remove */
d[i][j-1] + 1,       /* insert */
d[i-1][j-1] + cost); /* change */
}
}
 
return d[m][n];
}
 
int main()
{
 
char s[1000], t[1000];
int xyz;
 
while( (scanf("%s %s %d", s, t, &xyz)) != EOF )
{
        if( xyz != Levenshtein(s, t) ) puts("YES");
        else puts("NO");
} 
 
return 0;
}



