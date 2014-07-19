#include <cstdio>
#include <vector>
using namespace std;

class FindUnion
{
	private: vector<int> p, rank, setsize; int numsets;

	public:

		FindUnion(int N)
		{
			setsize.assign(N, 1); rank.assign(N, 0); 
			numsets = N;
			for(int i = 0; i < N; i++) p.push_back(i);	
		}

		int FindSet(int i)
		{
			if(p[i] == i) return i;
			else
			{
				p[i] = FindSet( p[i] );
				return p[i];
			}
		}

		bool IsSameSet(int i, int j)
		{
			return (FindSet(i) == FindSet(j));
		}

		void UnionSet(int i, int j)
		{
			if(IsSameSet(i,j)) return;
			int x = FindSet(i), y = FindSet(j); numsets--;

			if(rank[x] > rank[y])
			{
				p[y] = x; setsize[x] += setsize[y];
			}
			else
			{
				p[x] = y; setsize[y] += setsize[x];
				if(rank[x] == rank[y]) rank[y]++;
			}
		}

		int NumberofDisjointSets() { return numsets; }
		int SizeOfSet(int i) { return setsize[FindSet(i)]; }
};

int main()
{
	int t; scanf("%d", &t); FindUnion FU(t);

	for(int i = 0; i < t; i++)
	{
		int x; scanf("%d", &x); FU.UnionSet(i, x-1);
	}

	printf("%d", FU.NumberofDisjointSets());

	return 0;
}