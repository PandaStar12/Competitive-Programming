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

const int UNDEF = -1, MAXELELEMENTOW = 1000, MAXWAGA = 1000;
int dp[MAXELELEMENTOW+5][MAXWAGA+5], t, n, k, V[MAXELELEMENTOW+5];

int Calc(int i, int j)
{
	if(i < 0) return 0;
	else if(dp[i][j] != UNDEF) return dp[i][j];
	else return dp[i][j] = (j < V[i] ? Calc(i-1,j) : max(Calc(i-1, j), V[i] + Calc(i-2, j-V[i])) );
}

int main()
{
	scanf("%d", &t);

	FOR(ti, 1, t)
	{
		scanf("%d  %d", &n, &k);
		REP(i, n) scanf("%d", &V[i]);
		memset(dp, UNDEF, sizeof dp);
		int answer = Calc(n-1, k);
		printf("Scenario #%d: %d\n\n", ti, answer);
	}

	return 0;
}