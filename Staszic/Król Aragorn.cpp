// Jedno z moich ulubionych zadań :)

#include <cstdio>
#include <vector>
#include <utility>
#include <map>
#define FOREACH(i,v) for(VAR(i,v.begin());i!=v.end();i++)
#define FOR(i,f,t) for(int i=f;i<=t;i++)
#define REP(i,n) for(int i=0;i<n;i++)
typedef std::vector<int> VI;
#define VAR(i,v) __typeof(v)i=v
#define MAX 100000

using namespace std;

int a, b, n, m, time = 0, counter = 0, w = 0;
int P[MAX+1], Deg[MAX+1];
std::vector< pair<int, int> > Query;
VI G[MAX+1];
map< pair<int, int>, int> Matrix;

void DFS(int v)
{
	FOREACH(i, G[v])
	{
		pair<int,int> para;

		if( *i < v ) { para.first = *i; para.second = v; }
		else { para.first = v; para.second = *i; }


		if( Matrix[para] == 0 )
		{
			Matrix[para] = counter;
			counter++;
		}

		if(P[*i] == -1)
		{
			P[*i] = v;
			DFS(*i);
		}
	}
}

int main()
{
	scanf("%d %d", &n, &m);

	REP(i, m)
	{
		scanf("%d %d", &a, &b);

		G[a].push_back(b); G[b].push_back(a); Deg[a]++; Deg[b]++; 

		pair<int,int> para;

		if( a < b ) { para.first = a; para.second = b; }
		else { para.first = b; para.second = a; }

		Query.push_back(para);
	}

	FOR(i, 1, n)
	{
		if( Deg[i] == 1 )
		{
			counter++; w = i;
		}
	}

	if( counter == 2 && n == 2 )
	{
		printf("1\n");
		return 0;
	}

	if( counter > 1 ) printf("-1\n");
	else
	{
		FOR(i, 1, n) { P[i] = -1; }

		if( w == 0 ) w = 1;

		counter = 1; DFS(w);

		REP(i, m)
		{
			printf("%d\n", Matrix[Query[i]] );
		}
	}
	
	return 0;
}

