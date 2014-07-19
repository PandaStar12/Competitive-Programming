#include <stdio.h>
#define MAX 100000
 
inline void readINT(unsigned int *n)
{
        register char c = 0;
        while (c < 33) c=getc_unlocked(stdin);
        (*n) = 0;
        while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
inline void readStr( char *WSK )
{
        register char c;       
        unsigned int i = 0;
        
        while(1)
        {
                c = fgetc_unlocked(stdin);
                if( c == '\n' || c == EOF ) return;
                WSK[i] = c;
                i++;
        }     
}
 
inline void Tak()
{
        fputc_unlocked('T', stdout);
        fputc_unlocked('A', stdout);
        fputc_unlocked('K', stdout);
        fputc_unlocked('\n', stdout);
}
 
inline void Nie()
{
        fputc_unlocked('N', stdout);
        fputc_unlocked('I', stdout);
        fputc_unlocked('E', stdout);
        fputc_unlocked('\n', stdout);
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
 
char A[MAX+3], B[MAX+3]; 
 
int main()
{
        unsigned int t, n, m, equiv;
        
        readINT(&t);
 
        while(t--)
        {
                readINT(&n);
                readINT(&m);
                
                readStr(A);
                
                n--;
                equiv = 1;
                
                while(n--)
                {
                        readStr(B);
                        
                        if( equiv != 0 )
                        {
                                if( equiv_cyc(A, B, m) == 0 ) equiv = 0;
                        }
                }
 
                if( equiv == 1 ) Tak();
                else Nie();
        }
 
        return 0;
}

