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

// Solution :

const int INF = 1000000001;
const int MAXN = 30, MAXS = 1000000;

int n, k, s, w; VI V, dp;

int main()
{
	scanf("%d %d %d", &n, &k, &s); V.resize(n); dp.resize(s+1, INF);
	REP(i,n) scanf("%d", &V[i]); 
	dp[0] = 0;

	FOR(i,0,n-1)
	{
		FORD(j, s, V[i]) dp[j] = min(dp[j], dp[j-V[i]] + 1);
	}

	FORD(i,s,0) if(dp[i] <= k) { w = i; break; }
	
	printf("%d\n", w);

	return 0;
}