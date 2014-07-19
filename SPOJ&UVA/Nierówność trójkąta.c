#include <stdio.h>
 
int main() 
{
        float a,b,c;
        
        while( (fscanf(stdin,"%f %f %f", &a, &b, &c)) != EOF )
        {
                if( (a < b+c) && (b < a+c) && ( c < a+b) )
                {
			fputc_unlocked('1', stdout);
			fputc_unlocked('\n', stdout);
                }
                else
                {
                	fputc_unlocked('0', stdout);
                	fputc_unlocked('\n', stdout);
                }
        }     
          
        return 0;
}
