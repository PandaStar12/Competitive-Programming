/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
//#include "header.h"
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

typedef vector<int> VI;
typedef long long LL;
typedef pair<int,int> pii;

// Solution :

int n, r1, r2;
vector<VI> adj;
vector<bool> vis;
VI p;

void Prepare() {
	scanf("%d %d %d", &n, &r1, &r2);
	vis.resize(n+1, false);
	adj.resize(n+1);
	p.resize(n+1);

	FOR(i, 1, n) {
		if(i == r1) continue;
		int v; scanf("%d", &v);
		adj[v].PB(i); adj[i].PB(v);
	}
}

void DFS(int v, int parent) {
	p[v] = parent;
	vis[v] = true;

	REP(i, SIZE(adj[v])) {
		int u = adj[v][i];
		if(!vis[u]) DFS(u, v);
	}
}

int main()
{
	Prepare(); DFS(r2, -1);
	FOR(i, 1, n) { if(i != r2) printf("%d ", p[i]); }
	return 0;
}
