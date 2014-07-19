/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(x, b, e) for(int x = b; x <= (e); x++)
#define FORD(x, b, e) for(int x = b; x >= (e); x--)
#define REP(x, n) for(int x = 0; x < (n); x++)
#define VAR(v, n) __typeof(n) v = (n)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(x) ((int)(x).size())
#define FOREACH(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define PB push_back
#define ST first
#define ND second

inline string IntToStr(int x) { ostringstream ss; ss << x; return ss.str(); }
inline int StrToInt(string x) { int i; istringstream iss(x); iss >> i; return i; }

typedef long long LL;
typedef vector<LL> VI;
typedef pair<LL,LL> pii;

const LL INF = 9223372036854775807ll;

// Solution :

LL n, m;
VI dist, path;
vector< vector<pii> > adj;
priority_queue< pii, vector<pii>, greater<pii> > Q;

void Prepare() {
	scanf("%I64d %I64d", &n, &m);
	adj.resize(n);
	path.resize(n, -1);
	dist.resize(n, INF);
	dist[0] = 0;

	REP(i, m) {
		LL x, y, z;
		scanf("%I64d %I64d %I64d", &x, &y, &z);
		x--; y--;
		adj[x].PB({y,z});
		adj[y].PB({x,z});
	}
}

void printPath(LL v) {
	if (path[v] != -1) printPath(path[v]);
	printf("%I64d ", v+1);
}

inline void relax(pii v, LL u) {
	dist[v.ST] = dist[u] + v.ND;
	Q.push({dist[v.ST], v.ST});
	path[v.ST] = u;
}

void dijkstra(LL s) {
	Q.push({0,s});

	while(!Q.empty()) {
		LL d = Q.top().ST, u = Q.top().ND; Q.pop();
		if(d > dist[u]) continue;

		REP(i, SIZE(adj[u])) {
			pii v = adj[u][i];
			if(dist[u] + v.ND < dist[v.ST]) relax(v, u);
		}
	}
}

int main()
{
	Prepare(); dijkstra(0);
	if (dist[n-1] == INF) printf("-1");
	else printPath(n-1);
	
	return 0;
}
