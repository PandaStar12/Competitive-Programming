#include <stdio.h> 
#define MAX 100000
 
int n, k, i, p;
 
void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main(void) 
{
        readINT(&n);
        readINT(&k);
                
        int T[MAX+1];
                
        n = n-k;
                
        for( i = 0; i < k; i++ ) scanf("%d", &T[i]);
                
        while(n--)
        {
                scanf("%d", &p);
                printf("%d ", p);
        }
                
        for( i = 0; i < k; i++ ) printf("%d ", T[i]);
 
        return 0;
}
