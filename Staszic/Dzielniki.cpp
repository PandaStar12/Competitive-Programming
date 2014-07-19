#include <cstdio>
#include <cmath>

int main()
{
	int n, counter = 0;

	scanf("%d", &n);

	for( int i = 1; i < sqrt(n); i++ ) if( n % i == 0 ) counter++;
	for( int i = sqrt(n); i >= 1; i-- ) if( n % i == 0 ) counter++;	

	printf("%d\n", counter);

	return 0;
}

