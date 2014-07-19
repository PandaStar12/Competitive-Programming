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

const int MAXN = 1000, MAXM =  1000;
int LCS[MAXN+1][MAXM+1], n, m, t;
string X, Y;

inline void LongestCommonSubsequence()
{
	FOR(i, 0, n) LCS[i][0] = 0;
	FOR(j, 0, m) LCS[0][j] = 0;

	FOR(i, 1, n)
	{
		FOR(j, 1, m)
		{
			if(X[i] == Y[j]) LCS[i][j] = 1 + LCS[i-1][j-1];
			else LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
		}
	}
}

inline string LCSPrinting(int nn, int mm)
{
	int i = nn, j = mm; string s = "";

	while(i > 0 && j > 0)
	{
		if(X[i] == Y[j])	// Strzalka skosna
		{
			s = X[i] + s; i--; j--;
		}
		else if(LCS[i-1][j] >= LCS[i][j-1])	// Strzalka w gore
		{
			i--;
		}
		else	// Strzalka w lewo
		{
			j--;
		}
	}

	return s;
}

int main()
{
	ios_base::sync_with_stdio(false); cin >> t;

	while(t--)
	{
		cin >> X >> Y; n = X.size(); m = Y.size(); X = "$" + X; Y = "$" + Y;
		LongestCommonSubsequence();
		cout << LCS[n][m] << "\n";
	}

	return 0;
}