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
inline int StrToInt(string x) {int i;istringstream iss(x);iss >> i;return i;}

typedef vector<int> VI;
typedef vector<VI> VIVI;
typedef long long LL;
typedef pair<int,int> pii;

// Solution :

int N, M, Q, x, y, z, ans;

vector<VIVI> Graph;
VI Colors, addedColors;
vector<bool> vis;

void Prepare() {
	scanf("%d %d", &N, &M);
	addedColors.resize(M, false);
	Graph.resize(M);
	REP(i, M) Graph[i].resize(N);

	REP(i, M) {
		scanf("%d %d %d", &x, &y, &z);
		x--; y--; z--;

		Graph[z][x].PB(y);
		Graph[z][y].PB(x);

		if(!addedColors[z]) {
			Colors.PB(z);
			addedColors[z] = 1;
		}
	}
}

void DFS(int v, int c) {
	vis[v] = 1;

	REP(i, SIZE(Graph[c][v])) {
		int u = Graph[c][v][i];
		if(!vis[u]) DFS(u, c);
	}
}

void Query() {
	scanf("%d %d", &x, &y);
	x--; y--; ans = 0;

	REP(i, SIZE(Colors)) {
		vis.assign(N, 0);
		DFS(x,Colors[i]);
		if(vis[y]) ans++;
	}

	printf("%d\n", ans);
}

int main()
{
	Prepare();
	scanf("%d", &Q);
	while(Q--) Query();

	return 0;
}