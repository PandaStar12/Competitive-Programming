#include <stdio.h>
#define MAX 1000000
 
int a[MAX];
int n, i, k, t;

inline void PrintINT(int a)
{
        if(a==0) return;
        else
        {
                PrintINT(a/10);
                fputc_unlocked( (a%10)+48, stdout);
        }
}
 
inline void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main()
{
        readINT(&t);
          
        while(t--)
        {
                readINT(&n);
        	for ( i = 0; i < n; ++i) readINT(&a[i]);
                
                int lider = 0, ile = 0;            
                
                for ( k = 0; k < n; ++k)
                {
                        if (ile == 0)
                        {
                                lider = a[k];
                                ile = 1;
                        }
                        else  if (lider == a[k]) ++ile;
                        else                     --ile;
                }    
                    
                ile = 0;           
                
                for ( i = 0; i < n; ++i) if (a[i] == lider) ++ile; 
                           
                if (ile > n / 2) PrintINT(lider);
                else
                {
                        fputc_unlocked('-', stdout);
                        fputc_unlocked('1', stdout);
                }       
                
                fputc_unlocked('\n', stdout);
        }   
           
        return 0;
}
