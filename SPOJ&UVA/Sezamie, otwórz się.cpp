#include <stdio.h>
#include <string.h>
#define MAX 60000
 
char A[MAX+3], B[MAX+3];
 
inline void readINT(int *n)	// Szybkie wczytywanie INTów by Rafał Nowak
{
register char c = 0;
while (c < 33) c=getc_unlocked(stdin);
(*n) = 0;
while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}

inline unsigned int readStr( char *WSK )
{
        register char c;
        
        unsigned int i = 0;
        
        while(1)
        {
                c = fgetc_unlocked(stdin);
                if( c < 33 ) break;
                WSK[i] = c;
                i++;
        }
        
        return i;
}
 
int equiv_cyc( char u[], char v[], int n)
{
	int i = -1, j = -1, k;

	while( i<n-1 && j<n-1 )
	{
		k = 1;
		while(k<=n && u[(i+k)%n]==v[(j+k)%n]) k++;
		if (k>n) return 1;
		if (u[(i+k)%n] > v[(j+k)%n]) i += k; else j += k;
	}
	
	return 0;
}
 
int main()
{
        int t, i;
        readINT(&t);
 
        while(t--)
        {
                readStr(A);
                
                i = readStr(B);
 
                if( equiv_cyc(A,B, i) == 1)
                {
                	fputc_unlocked('y', stdout);
                	fputc_unlocked('e', stdout);
                	fputc_unlocked('s', stdout);
                	fputc_unlocked('\n',stdout);
                }
                else
                {
                	fputc_unlocked('n', stdout);
                	fputc_unlocked('o', stdout);
                	fputc_unlocked('\n',stdout);
                }
                
        }
 
        return 0;
}
