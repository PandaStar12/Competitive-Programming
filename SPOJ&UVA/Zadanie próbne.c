#include <stdio.h>

void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main() 
{
        int a,b;
        readINT(&a);
        readINT(&b);
        printf("%d", a+b);      
        return 0;
}
