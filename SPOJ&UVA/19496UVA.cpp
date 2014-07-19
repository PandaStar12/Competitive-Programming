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

typedef vector<int> VI;
typedef long long LL;

const double EPS = 10e-9;
const int INF = 1000000001;

// Solution :

const int MAXN = 11, UNDEF = -1;
int X[MAXN], Y[MAXN], D[MAXN][MAXN], DP[MAXN][1 << MAXN], t, x, y, n;

int TSP(int pos, int bitmask)
{
	if(bitmask == (1 << (n + 1)) - 1) return D[pos][0];
	if(DP[pos][bitmask] != UNDEF) return DP[pos][bitmask];

	int ans = INF;

	FOR(i, 0, n)
	{
		if(i != pos && !(bitmask & (1 << i))) ans = min(ans, D[pos][i] + TSP(i, bitmask | (1 << i)));
	}

	return DP[pos][bitmask] = ans;
}

int main()
{
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d %d %d %d", &x, &y, &X[0], &Y[0], &n);
		FOR(i,1,n) scanf("%d %d", &X[i], &Y[i]);
		FOR(i,0,n) FOR(j,0,n) D[i][j] = abs(X[i] - X[j]) + abs(Y[i] - Y[j]);
		memset(DP, UNDEF, sizeof DP);
		printf("The shortest path has length %d\n", TSP(0, 1));
	}

	return 0;
}