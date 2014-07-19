#include <stdio.h>

inline void readINT(unsigned int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}

int main()
{   
	unsigned int t, n, i, c, a, b;

	readINT(&t);

	while(t--)
	{
		readINT(&n);
		readINT(&a);
		readINT(&b);
		n %= 60;

		if(n>2)
		{
			for( i = 3;i <= n; i++ )
			{
				a%=10;
				b%=10;
				
				c=a+b;
				a=b;
				b=c;
			}
			
			printf("%u\n", c%10);
		}
		else
		{
			if(n == 0) printf("%u\n",(((b%10)-(a%10)+10)%10));
			if(n == 1) printf("%u\n", a%10);
			if(n == 2) printf("%u\n", b%10);
		}
	}

	return 0;
}
