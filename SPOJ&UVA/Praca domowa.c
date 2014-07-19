#include <stdio.h>
#define MAX 1000000
 
char T[100];
 
inline void PrintINT(int a)
{
        if(a==0) return;
        else
        {
                PrintINT(a/10);
                fputc_unlocked( (a%10)+48, stdout);
        }
}
 
inline void readLL(unsigned long int *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
} 
 
inline void readUINT(unsigned int *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
} 
 
unsigned long int TAB[MAX+1];
 
int main() 
{
        unsigned int t;
        readUINT(&t);
        
        while(t--)
        {
                unsigned long int N, K, POM, Q, A, B, i;
                
                readLL(&N);
                readLL(&K);
                
                for( i = 0; i <= K; i++ ) TAB[i] = 0;
                
                while(N--)
                {
                        readLL(&POM);
                        TAB[POM]++;
                }
                
                POM = 0;
                
                for( i = 0; i <= K; i++ )
                {
                        TAB[i] += POM;
                        POM = TAB[i];
                }
                
                readLL(&Q);
                
                while(Q--)
                {
                        readLL(&A);
                        readLL(&B);
                        
                        if( A == 0 ) 
                        {
                                if(TAB[B]==0) fputc_unlocked('0', stdout);
                                else PrintINT(TAB[B]);
                                fputc_unlocked('\n',stdout); 
                        }
                        else 
                        {
                                if(TAB[B]-TAB[A-1]==0)fputc_unlocked('0', stdout);
                                else PrintINT(TAB[B]-TAB[A-1]);
                                fputc_unlocked('\n',stdout); 
                        }
                }               
        }
         
        return 0;
}
