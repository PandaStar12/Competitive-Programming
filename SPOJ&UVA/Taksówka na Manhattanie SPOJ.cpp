#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int n, x, y;
long long maxx = -2e9, maxy = -2e9, minx = 2e9, miny = 2e9;

int main()
{
	scanf("%d", &n);

	while(n--)
	{
		scanf("%d %d", &x, &y);
		x -= y; y += x+y;
		if(y > maxy)
		    maxy = y;
		if(y < miny)
		    miny = y;
		if(x > maxx)
		    maxx = x;
		if(x < minx)
		    minx = x;
	}

	printf("%lld\n", max(abs(maxx-minx), abs(maxy-miny)));

	return 0;
}
