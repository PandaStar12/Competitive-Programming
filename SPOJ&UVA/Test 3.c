#include <stdio.h>
 
int main() 
{
        int wynik = 0;
        int A, B = 42;
        
        while(wynik < 3)
        {
                scanf("%d", &A);
                printf("%.2d\n", A);
                if( (A == 42) && (B != 42) ) 
                {
                        B = A;
                        wynik++;
                }
                else B = A;
        }       
        return 0;
}

