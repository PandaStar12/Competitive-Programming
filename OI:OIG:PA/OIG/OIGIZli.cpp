#include <stdio.h>
 
char c;
unsigned int i;
unsigned int CHAR[256];
 
int main(void) 
{
	scanf("%u", &i);
        
	while( c != EOF )
	{
		c = fgetc_unlocked(stdin);
		CHAR[c]++;
	}

	for( i = 97; i <= 122; i++ ) if( CHAR[i] != 0 ) printf("%c %u\n", i, CHAR[i]);
	for( i = 65; i <= 90;  i++ ) if( CHAR[i] != 0 ) printf("%c %u\n", i, CHAR[i]);

	return 0;
}