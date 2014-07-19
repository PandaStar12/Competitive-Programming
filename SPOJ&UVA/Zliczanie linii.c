#include <stdio.h>
 
int Wynik = 0; 
char c;
 
int main() 
{
        while( c != EOF )
        {
                c = fgetc_unlocked(stdin);
                if( c == '\n' ) Wynik++;
        }   
        
        printf("%d", Wynik+1);
        
        return 0;
}

