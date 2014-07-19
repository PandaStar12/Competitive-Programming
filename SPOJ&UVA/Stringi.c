#include <stdio.h>
#include <math.h>

inline void readINT( unsigned int *n )
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}

inline void Tak(void)
{
	fputc_unlocked( 'T', stdout);
	fputc_unlocked( 'A', stdout);
	fputc_unlocked( 'K', stdout);
	fputc_unlocked('\n', stdout);
}

inline void Nie(void)
{
	fputc_unlocked( 'N', stdout);
	fputc_unlocked( 'I', stdout);
	fputc_unlocked( 'E', stdout);
	fputc_unlocked('\n', stdout);
}

unsigned int Pow3(unsigned int k)
{
	unsigned int r = 1, i;
	for ( i = 0; i < k; i++ ) r *= 3;
	return r;
}

int main()
{
	unsigned int t, N, K;

	readINT(&t);

	while(t--)
	{
		readINT(&N);
		readINT(&K);
	
		if( N == 0 ) Tak();
		else if( N == 1 || N == 2 || K == 0 ) Nie();
		else if( K > 20 ) Tak();
		else if ( (Pow3(K) - 3) / 2 >= N ) Tak();
		else Nie();		
	}

	return 0;
}
