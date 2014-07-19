#include <cstdio>
#include <vector>

class FanwickTree
{
	private: std::vector<int> A, B; int size; // W sumie dwa drzewka
	public:

		FanwickTree(int N) { size = N; A.assign(N+5, 0); B.assign(N+5, 0); }
		
		void Update(bool Tree, int k, int v) // 0 dla A, 1 dla B
		{
			for(int i = k; i <= size; i += i&(-i))
			{
				Tree == true ? B[i] += v : A[i] += v;
			}
		}

		void RangeUpdate(int a, int b, int v)
		{
			Update(0, a, v); Update(0, b+1, -v);
			Update(1, a, v*(a-1)); Update(1, b+1, -v*b);
		}

		int Query(bool Tree, int b)
		{
			int sum = 0;
			for(int i = b; i > 0; i -= i&(-i)) Tree == true ? sum += B[i] : sum += A[i];
			return sum;
		}

		int Query(int b)
		{
			return Query(0, b) * b - Query(1,b);
		}

		int RangeQuery(int a, int b)
		{
			return Query(b) - Query(a-1);
		}
};

int t, u, n, q, a, b, c;

int main()
{
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &n, &u); FanwickTree FT(n);

		while(u--)
		{
			scanf("%d %d %d", &a, &b, &c); FT.RangeUpdate(a+1,b+1,c);
		}

		scanf("%d", &q);

		while(q--)
		{
			scanf("%d", &a); printf("%d\n", FT.RangeQuery(a+1, a+1));
		}
	}

	return 0;
}
