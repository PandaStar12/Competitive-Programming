#include <cstdio>
#include <vector>

class FanwickTree
{
	private: std::vector<long long int> A, B; int size; // W sumie dwa drzewka
	public:

		FanwickTree(int N) { size = N; A.assign(N+5, 0); B.assign(N+5, 0); }
		
		void Update(bool Tree, int k, long long int v) // 0 dla A, 1 dla B
		{
			for(int i = k; i <= size; i += i&(-i))
			{
				Tree == true ? B[i] += v : A[i] += v;
			}
		}

		void RangeUpdate(int a, int b, long long int v)
		{
			Update(0, a, v); Update(0, b+1, -v);
			Update(1, a, v*(a-1)); Update(1, b+1, -v*b);
		}

		long long int Query(bool Tree, int b)
		{
			long long int sum = 0;
			for(int i = b; i > 0; i -= i&(-i)) Tree == true ? sum += B[i] : sum += A[i];
			return sum;
		}

		long long int Query(int b)
		{
			return Query(0, b) * b - Query(1,b);
		}

		long long int RangeQuery(int a, int b)
		{
			return Query(b) - Query(a-1);
		}
};

int t, c, n, q, x, y;
long long int z;

int main()
{
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &n, &c); FanwickTree FT(n);

		while(c--)
		{
			scanf("%d", &q);

			if(q == 0)
			{
				scanf("%d %d %lld", &x, &y, &z);
				FT.RangeUpdate(x,y,z);
			}
			else
			{
				scanf("%d %d", &x, &y);
				printf("%lld\n", FT.RangeQuery(x,y));
			}
		}
	}

	return 0;
}
