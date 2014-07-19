#include <stdio.h>
#define MAX 1005

char CHAR[MAX+1];
signed int i=-1;

void Wypisz()
{
	while(i--) fputc_unlocked(CHAR[i], stdout);
	fputc_unlocked('\n', stdout);
	i = -1;
}

int main(void) 
{
	while(CHAR[i] != EOF )
	{
		i++;
		CHAR[i] = fgetc_unlocked(stdin);
		if( CHAR[i] == '\n' ) Wypisz();
	}
	
	Wypisz();
	
	return 0;
}
