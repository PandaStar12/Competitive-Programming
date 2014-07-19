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

int n, m, t;

void Solve()
{
	if(m > n) swap(m,n);	// Asume that n is bigger (or equal) than m
	int mx = max(t, max(n,m));
	vector<int> DP(mx+5, 0); 
	DP[n] = DP[m] = 1;

	FOR(i, m, t)
	{
		if(i+n <= t && DP[i] != 0) DP[i+n] = max(DP[i] + 1, DP[i+n]);
		if(i+m <= t && DP[i] != 0) DP[i+m] = max(DP[i] + 1, DP[i+m]);
	}

	if(DP[t] > 0) printf("%d\n", DP[t]);
	else
	{
		FORD(i,t,0)
		{
			if(DP[i] > 0)
			{
				printf("%d %d\n", DP[i], t-i); return;
			}
		}

		printf("0 %d\n", t);
	}
}

int main()
{
	while( scanf("%d %d %d", &m, &n, &t) != EOF ) Solve();
	return 0;
}
