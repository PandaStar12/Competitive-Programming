#include <stdio.h>
#include <string.h>
#define MAX 2000
 
void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main(void) 
{
        int t, l, i;
        char WSK[MAX+5];
        
        readINT(&t);
        
        while(t--)
        {
                i = 0;
        
                while(1)
                {
                        WSK[i] = fgetc_unlocked(stdin);
                        
                        if( WSK[i] == '\n' || WSK[i] == EOF ) break;
                        
                        i++;
                }
                
                l = i/2;
                fwrite_unlocked (WSK , l , 1 , stdout );
                fputc_unlocked((int)'\n', stdout);
        }
                 
        return 0;
}
