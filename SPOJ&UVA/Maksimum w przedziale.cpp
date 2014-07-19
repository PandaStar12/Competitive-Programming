#include <cstdio>
#include <vector>
using namespace std;

inline int MAX(int a, int b)
{
	if(a > b) return a;
	else return b;
}

inline int Pot2(int n)
{
	int pot = 1;
	while(pot < n) pot *= 2;
	return pot;
}

class SegmentTree
{
	private: vector<int> w; int M;
	public:

			SegmentTree(int m) { M = m; w.assign(2*M+5, 0); }

			void Insert(int x, int val)
			{
				int v = M + x;  w[v] = val;
				while(v != 1) { v /= 2;  w[v] = MAX(w[2*v], w[2*v + 1]); }
			}

			int Query(int a, int b)
			{
				int va = M+a, vb = M+b;
				int wynik = MAX(w[va], w[vb]);
			
				while(va/2 != vb/2)
				{
					if(va % 2 == 0) wynik = MAX(wynik, w[va+1]);
					if(vb % 2 == 1) wynik = MAX(wynik, w[vb-1]);
					va /= 2; vb /= 2;
				}

				return wynik;
			}
};

int n, m, a, b, c;

int main()
{
	scanf("%d %d", &n, &m);

	SegmentTree Drzewo(Pot2(n));

	while(m--)
	{
		scanf("%d %d %d", &a, &b, &c);

		if(a == 1) Drzewo.Insert(b,c);
		else printf("%d\n", Drzewo.Query(b,c));
	}

	return 0;
}
