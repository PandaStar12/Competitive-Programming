#include <stdio.h>
#include <math.h>
#define MAX 1440
 
int T[1000];
 
int main(void) 
{
        int h, m, i=0, j;
 
        scanf("%d:%d", &h, &m);
        
        T[i] = h*60 + m;
        i++;
        T[i] = T[i-1]+45;
        i++;
        
        while( (scanf("%d", &m)) != EOF )
        {
                T[i] = T[i-1]+m;
                i++;
                T[i] = T[i-1]+45;
                i++;
        }
        
        for( j = 0; j < i-1; j++ )
        {
                printf("%.2d:%.2d,", (int)floor( (T[j] % 1440) / 60), (T[j] % 1440 % 60) );
        }
        
        printf("%.2d:%.2d", (int)floor( (T[j] % 1440) / 60), (T[j] % 1440 % 60) );
                 
        return 0;
}
