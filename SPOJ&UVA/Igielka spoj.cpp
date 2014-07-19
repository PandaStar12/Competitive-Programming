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

const int UNDEF = -1, MAXN = 105, MAXA = 205, MAXB = 205;
int dp[MAXN][MAXA][MAXB], A[MAXA], B[MAXB], n, a, b;

int Calc(int i, int j, int k)
{
	if(dp[i][j][k] != UNDEF) return dp[i][j][k];
	if(i == n || j <= 0 || k <= 0) return 0;
	if(j < A[i] || k < B[i]) return dp[i][j][k] = Calc(i+1, j, k);
	else return dp[i][j][k] = max(1+Calc(i+1, j-A[i], k-B[i]), Calc(i+1,j,k));
}

int main()
{
	scanf("%d %d %d", &n, &a, &b);
	REP(i, n) scanf("%d %d", &A[i], &B[i]);

	FOR(i,0,n+1)
	{
		FOR(j, 0, a+1)
		{
			FOR(k, 0, b+1) dp[i][j][k] = UNDEF;
		}
	}

	int ans = Calc(0, a, b);
	printf("%d\n", ans);

	return 0;
}