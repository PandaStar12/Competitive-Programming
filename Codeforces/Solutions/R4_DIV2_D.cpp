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
typedef pair<int,int> pii;
typedef long long LL;

const double EPS = 10e-9;
const int INF = 1000000001;

// Solution :

struct Box
{
	int w, h, index;

	Box(int _w = 0, int _h = 0, int _index = 0)
	{
		w = _w; h = _h; index = _index;
	}
};

vector<Box> V;
int n, w, h;
vector<pii> dp;	// (index, max value) 

int Solve(int i)
{
	if(dp[i].ND != 0) return dp[i].ND;
	else
	{
		FOR(k,0,n)
		{
			if(V[i].w < V[k].w && V[i].h < V[k].h)
			{
				int kthanswer = Solve(k);

				if(dp[i].ND <= kthanswer)
				{
					dp[i].ST = k; dp[i].ND = kthanswer+1;
				}
			}
		}

		return dp[i].ND;
	}
}



int main()
{
	scanf("%d", &n); V.resize(n+1);

	FOR(i, 0, n)
	{
		scanf("%d %d", &w, &h);
		V[i] = Box(w, h, i);
	}

	dp.resize(n+1, pii(0,0));
	int answer = Solve(0);
	printf("%d\n", answer); int idx = 0;

	while(1)
	{
		if(dp[idx].ST == 0) break;
		else printf("%d ", dp[idx].ST), idx = dp[idx].ST;
	}

}
