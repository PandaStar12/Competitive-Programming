#include <stdio.h> 
#define MAX 100000
 
int t, n, pom;
 
void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main(void) 
{
        readINT(&t);
        
        while(t--)
        {
 
                readINT(&n);
                readINT(&pom);
                
                while(1)
                {
                        char c = fgetc_unlocked(stdin);
 
                        if( c != '\n' && c != EOF ) putc(c,stdout);
                        else break;     
                }
                
                printf(" %d\n", pom);
        }
        
        return 0;
}

