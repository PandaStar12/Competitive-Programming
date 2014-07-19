#include <stdio.h>
#define MAX 1000
 
int T[MAX+1], i=0, j;
 
int main(void) 
{
        while( (scanf("%d", &T[i])) != EOF ) i++;
        for( j = i-1; j >= 0; j-- ) printf("%d ", T[j]);
        return 0;
}
