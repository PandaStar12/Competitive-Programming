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
vector<VI> adj;
vector<pii> vertex;
vector<bool> visited;

inline bool can_move(pii p1, pii p2) {
	int a = p1.ST, b = p1.ND, c = p2.ST, d = p2.ND;
	return ((c < a && a < d) || (c < b && b < d));
}

void add(int a, int b) {
	adj.PB({}); N++;
	vertex.PB({a,b});

	REP(i, N-1) {
		if(can_move(vertex[i], vertex[N-1])) adj[i].PB(N-1);
		if(can_move(vertex[N-1], vertex[i])) adj[N-1].PB(i);
	}
}

void DFS(int v) {
	visited[v] = true;
	REP(i, SIZE(adj[v])) {
		int u = adj[v][i];
		if(!visited[u]) DFS(u);
	}
}

void find(int a, int b) {
	visited.assign(N, false); DFS(a);
	if(visited[b]) printf("YES\n");
	else printf("NO\n");
}

int main() {
	int number_of_queries;
	scanf("%d", &number_of_queries);

	while(number_of_queries--) {
		int a, b, q;
		scanf("%d %d %d", &q, &a, &b);
		q == 1 ? add(a, b) : find(a-1, b-1);
	}

	return 0;
}
