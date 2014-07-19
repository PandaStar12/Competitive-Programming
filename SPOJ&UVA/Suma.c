#include <stdio.h>
 
int main() 
{
        int liczba, suma = 0;
        
        while( (scanf("%d", &liczba)) != EOF )
        {
                suma += liczba;
                printf("%d\n", suma);
        }       
        return 0;
}
