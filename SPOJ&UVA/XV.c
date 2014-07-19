#include <stdio.h>
#include <string.h>
 
char T[1000];
 
int main(void) 
{
        while(1)
        {       
                scanf("%s", T);
                
                if( T[0] == '0' ) break;
                else
                {
                        int l = strlen(T), i, suma = 0;
                        
                        for( i = 0; i < l; ++i ) suma += T[i] - 48;
                        
                        if( (T[l-1] == '0' || T[l-1] == '5') && (suma % 3 == 0 ))
                        {
                                fputc_unlocked(84, stdout);
                                fputc_unlocked(65, stdout);
                                fputc_unlocked(75, stdout);
                                fputc_unlocked(10, stdout);
                        }
                        else
                        {
                                fputc_unlocked(78, stdout);
                                fputc_unlocked(73, stdout);
                                fputc_unlocked(69, stdout);
                                fputc_unlocked(10, stdout);
                        }
                }
        }
        
        return 0;
}
