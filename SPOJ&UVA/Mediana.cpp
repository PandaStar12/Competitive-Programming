#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<long> T, V; long x; int n = 0;

int main()
{
	T.push_back(0);
	while(scanf("%ld", &x) != EOF) { T.push_back(x); n++; }

	if(T.size() == 2) printf("%ld", T[1]);
	else if(T.size() == 3) printf("%ld\n%ld", T[1], (T[1]+T[2]/2));
	else
	{
		printf("%ld\n%ld\n", T[1], (T[1]+T[2])/2);
		long a = T[1], b = T[2];
		if(a > b) swap(a,b);

		double median = (double)(a+b); median /= 2;
		priority_queue<long> A, B; A.push(a); B.push(-b); // A <= median, B >= median

		V.push_back(-1); V.push_back(a); V.push_back(b);

		for(int i = 3; i <= n; i++)
		{
			V.push_back(T[i]);

			if(i % 2 == 1)
			{
				x = T[i];

				if(x <= median) A.push(x);
				else B.push(-x);

				if(A.size() > B.size()) median = A.top();
				else median = -B.top();

				printf("%ld\n", (long int) median);
			}
			else
			{
				x = T[i];
				if(x <= median) A.push(x);
				else B.push(-x);

				while(A.size() > B.size())
				{
					x = A.top(); A.pop(); B.push(-x);
				}

				while(B.size() > A.size())
				{
					x = -B.top(); B.pop(); A.push(x);
				}

				median = A.top() - B.top(); median /= 2;
				printf("%ld\n", (long int)median);
			}
		}
	}

	return 0;
}