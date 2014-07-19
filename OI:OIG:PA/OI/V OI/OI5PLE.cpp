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
const int INF = 100000001;

// Solution :

const int MAXA = 79, MAXT = 21, MAXN = 1000, UNDEF = -1;
int T[MAXN], A[MAXN], W[MAXN], n, t, a;

int dp[MAXT+3][MAXA+3];

int main()
{
	memset(dp, INF, sizeof dp);
	scanf("%d %d %d", &t, &a, &n);
	FOR(i, 1, n) scanf("%d %d %d", &T[i], &A[i], &W[i]);
	dp[0][0] = 0;

	FOR(k,1,n)
	{
		FORD(ti,t,0)
		{
			FORD(ai, a, 0)
			{
				int td = min(t,ti+T[k]), ad = min(a, ai + A[k]);
				dp[td][ad] = min(dp[td][ad], dp[ti][ai] + W[k]);
			}
		}
	}

	int ans = dp[t][a]; printf("%d\n", ans);
	return 0;
}