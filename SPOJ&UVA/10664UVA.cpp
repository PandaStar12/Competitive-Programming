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

const int MAXN = 20, MAXS = 200, UNDEF = -1;
int t, n, x, dp[MAXN+5][MAXS+5], m[MAXN+5], M, MaxSum;

int Calc(int i, int j)
{
	if(dp[i][j] != UNDEF) return dp[i][j];
	else
	{
		if(i > n || j < 0) return 0;
		else
		{
			if(j == 0) return dp[i][j] = 1;
			else return dp[i][j] = max(Calc(i+1, j), Calc(i+1, j-m[i]));
		}
	}
}

int main()
{
	cin >> t; getchar();

	REP(ti, t)
	{
		string str; getline(cin,str); istringstream iss(str); n = 0; MaxSum = 0;

		if(str == "") {cout << "YES\n"; continue; }

		while(iss >> x) { m[n+1] = x; MaxSum += m[n+1]; n++;} // numeracja od 1 ... n

		if(MaxSum % 2 == 1 || MaxSum == 0) cout << "NO\n";
		else
		{
			memset(dp, -1, sizeof dp);
			M = MaxSum / 2; int ans = Calc(1, M);

			if(ans) cout << "YES\n";
			else cout << "NO\n";
		}
	}

	return 0;
}