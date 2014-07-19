#include <stdio.h>
#define max(a, b)  (((a) > (b)) ? (a) : (b))
#define LL int

inline void PrintINT(int a)
{
if(a==0) return;
else
{
PrintINT(a/10);
fputc_unlocked( (a%10)+48, stdout);
}
} 
 
void readLL(LL *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10LL + (c-'0'); c=getc_unlocked(stdin);}
}
 
char a[1001], b[1001];
int lcs[1001][1001], t, n, m, i, j;
 
int main(void)
{       
        readLL(&t);
        
        while(t--)
        {
                readLL(&n);
                for( i = 0; i < n; i++ ) a[i] = fgetc_unlocked(stdin);
                readLL(&m);
                for( i = 0; i < m; i++ ) b[i] = fgetc_unlocked(stdin);
         
                for ( i=1; i<=n; i++)
                {
                        for ( j=1; j<=m; j++)
                        {
         
                                if ( a[i-1] == b[j-1] ) // a[i-1] = i-ta litera s�owa a
                                {
                                        lcs[i][j] = lcs[i-1][j-1]+1;
                                }
                                else
                                {
                                        lcs[i][j] = max( lcs[i-1][j] , lcs[i][j-1] );
                                }
                        }
                }
                
                if( lcs[n][m] == 0 ) fputc_unlocked('0', stdout);
                else PrintINT(lcs[n][m]);
                fputc_unlocked('\n', stdout);
        }
 
        return 0;
}
