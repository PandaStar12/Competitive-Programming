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

typedef vector<int> VI;
typedef long long LL;
typedef pair<int,int> pii;

// Solution :

int N;
vector<bool> visited;
vector<VI> adj;
VI dist, starting_vertex;

void init() {
	scanf("%d", &N);
	visited.resize(N, false);
	dist.resize(N, 0);
	adj.resize(N);

	REP(i, N) {
		int x; scanf("%d", &x);
		if(x == -1) starting_vertex.PB(i);
		else adj[x-1].PB(i);
	}
}

int DFS(int v, int d) {
	visited[v] = 1; d++;

	REP(i, SIZE(adj[v])) {
		int u = adj[v][i];
		if(!visited[u]) dist[v] = max(dist[v], DFS(u, d));
	}

	return dist[v] = max(dist[v], d);
}

int main()
{
	init();
	REP(i, SIZE(starting_vertex)) DFS(starting_vertex[i], 0);
	printf("%d\n", *max_element(ALL(dist)));

	return 0;
}
