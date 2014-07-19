#include <stdio.h>
#include <string.h>
 
char CHAR[10000000];
int i, j, abc;
 
int main(void) 
{
        while(gets(CHAR))
        {
                j = strlen(CHAR);       
                
                for( i = 0; i < j; i++ )
                {
                        if( CHAR[i] == '?' )
                        {
                                if( CHAR[i+1] == '?' )
                                {
                                        if( CHAR[i+2] == '=' ) { fputc_unlocked('#', stdout); abc = 1; }
                                        else if( CHAR[i+2] == '/' ){ fputc_unlocked('\\', stdout); abc = 1; }
                                        else if( CHAR[i+2] == '\'' ) {fputc_unlocked('^', stdout); abc = 1; }
                                        else if( CHAR[i+2] == '(' ) {fputc_unlocked('[', stdout); abc = 1; }
                                        else if( CHAR[i+2] == ')' ) {fputc_unlocked(']', stdout); abc = 1; }
                                        else if( CHAR[i+2] == '!' ) {fputc_unlocked('|', stdout);abc = 1; }
                                        else if( CHAR[i+2] == '<' ) {fputc_unlocked('{', stdout); abc = 1; }
                                        else if( CHAR[i+2] == '>' ) {fputc_unlocked('}', stdout); abc = 1; }
                                        else if( CHAR[i+2] == '-' ) {fputc_unlocked('~', stdout); abc = 1; }    
                                }
                        }
                        
                        if( abc == 1 ) 
                        {
                                abc = 0;
                                i += 2;
                                continue;
                        }
                        else fputc_unlocked( CHAR[i], stdout);
                }
                
                fputc_unlocked('\n', stdout);
        }
        
        return 0;
}
