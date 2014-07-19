#include <stdio.h>
 
unsigned int ASCII[256];
 
int main() 
{
        int Znak;
        
        while( (Znak = getchar()) != EOF )
        {
                ASCII[Znak]++;
        }
        
        int i;
 
        for( i = 1; i <= 256; i++ )
        {
                if( ASCII[i] != 0 ) printf("%d %d\n", i, ASCII[i]);
        }
 
        return 0;
}

