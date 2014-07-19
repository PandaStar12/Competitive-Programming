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

const int UNDEF = -1;
int t, M, C, DP[210][25], price[25][25];

int Solve(int money, int g)
{
	if(money < 0) return -INF;
	if(g == C) return M-money;

	if(DP[money][g] != UNDEF) return DP[money][g];
	else
	{
		int ans = -1;		
		FOR(model, 1, price[g][0]) ans = max(ans, Solve(money-price[g][model], g+1));
		return DP[money][g] = ans;
	}
}

int main()
{
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &M, &C);
		REP(i,C)
		{
			scanf("%d", &price[i][0]);
			FOR(j,1,price[i][0]) scanf("%d", &price[i][j]);
		}

		memset(DP, -1, sizeof DP);
		int answer = Solve(M,0);
		if(answer < 0) printf("no solution\n");
		else printf("%d\n", answer);
	}

	return 0;
}
