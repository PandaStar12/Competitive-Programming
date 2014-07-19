#include <stdio.h>
 
int main() 
{
        int t, a, x, suma;
        
        scanf("%d", &t);
 
        while(t--)
        {
                suma = 0;
                
                scanf("%d", &a);
                
                while(a--)
                {                 
                        scanf("%d", &x);
                        suma += x; 
                }
 
                printf("%d\n", suma);
        }
        
        return 0;
}

