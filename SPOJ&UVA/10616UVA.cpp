/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(x, b, e) for(int x = b; x <= (e); ++x)
#define FORD(x, b, e) for(int x = b; x >= (e); --x)
#define REP(x, n) for(int x = 0; x < (n); ++x)
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

const int MAXN = 200, MAXQ = 10, MAXD = 20, MAXM = 10;
LL dp[MAXN+5][MAXM+5][MAXD+5];
int N, Q, D, M, tc = 1, A[MAXN+5];

inline int MOD(int x)
{
	return ((x) % D + D)%D;
}

LL Solve(int i, int j, int k)
{
	if(i > N || j > M ) return dp[i][j][k] = 0;
	else if(j == M)
	{
		if(k == 0) return dp[i][j][k] = 1;
		else return dp[i][j][k] = 0;
	}
	else if(i == N) return dp[i][j][k] = 0;
	else if(dp[i][j][k] != -1) return dp[i][j][k];
	else return dp[i][j][k] = Solve(i+1,j,k) + Solve(i+1, j+1, MOD(A[i] + k));
}

int main()
{
	while(scanf("%d %d", &N, &Q) != EOF)
	{
		if(N == Q && Q == 0) return 0;
		REP(i, N) scanf("%d", &A[i]);

		printf("SET %d:\n", tc); tc++;

		FOR(i, 1, Q)
		{
			memset(dp, -1, sizeof dp); scanf("%d %d", &D, &M);
			LL ans = Solve(0,0,0); printf("QUERY %d: %lld\n", i, ans);
		}
	}

	return 0;
}