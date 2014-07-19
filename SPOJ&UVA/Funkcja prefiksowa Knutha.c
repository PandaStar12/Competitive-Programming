#include <stdio.h>
 
inline void PrintInteger( int n)
{
        if(n == 0) return;
        else
        {
                PrintInteger( n/10 );
                fputc_unlocked( (n%10)+48, stdout);
        }
}
 
inline void ReadInteger( int *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
} 
 
int   t, m, k, q, pi[1000001], i;
char  P[1000001];
 
void CPF()
{
        pi[0] = 0; q = 0;
        for(k=1; k<m; k++)
        {
                //niezmiennik: q=pi[k-1]
                while(q>0 && P[k] != P[q])
                        q=pi[q-1];
                if(P[k] == P[q])
                        pi[k] = ++q;
                else
                        pi[k] = 0;
        }
}
 
int main(void) 
{
        ReadInteger(&t);
        
        while(t--)
        {
                i = 0;
 
                P[i] = fgetc_unlocked(stdin);
                
                while( P[i] > 33 ) 
                {       
                        ++i;
                        P[i] = fgetc_unlocked(stdin);
                }               
 
                m = i;
 
                CPF();
                for( i = 0; i < m; i++ )
                {
                        if( pi[i] == 0 ) fputc_unlocked('0', stdout);
                        else PrintInteger(pi[i]);
                        fputc_unlocked(' ', stdout);
                }
                
                fputc_unlocked('\n', stdout);
        }
        
        return 0;
}
