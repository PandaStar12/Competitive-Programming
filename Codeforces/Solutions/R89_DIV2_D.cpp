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
typedef pair<int,int> pii;

const double EPS = 10e-9;
const int INF = 1000000001;

// Solution :

const int UNDEF = -1, MOD = 100000000;
int n1, n2, k1, k2, answer;
int dp[101][101][11][11];

int Solve(int x, int y, int a, int b)
{
	if(x > n1 || y > n2 || a > k1 || b > k2) return 0;
	else if(x == n1 && y == n2) return dp[x][y][a][b] = 1;
	else if(dp[x][y][a][b] != UNDEF) return dp[x][y][a][b];
	else return dp[x][y][a][b] = (Solve(x+1,y,a+1,0) % MOD + Solve(x,y+1,0,b+1) % MOD) % MOD;
}

int main()
{
	memset(dp, UNDEF, sizeof dp);
	scanf("%d %d %d %d", &n1, &n2, &k1, &k2);
	answer = Solve(0,0,0,0);
	printf("%d\n", answer);
	return 0;
}

