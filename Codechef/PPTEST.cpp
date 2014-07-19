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

const int UNDEF = -1;
const int MAXN = 100, MAXS = 100, INF = 1000000001;

int V[MAXN+5], W[MAXN+5], Val[MAXN+5][MAXS+5], S, n, t, k; 

int Calc(int i, int j)
{
	if(Val[i][j] != UNDEF) return Val[i][j];
	if(j <= 0 || i == n) return Val[i][j] = 0;
	if(j < W[i]) return Val[i][j] = Calc(i+1, j); // Przechodzimy do kolejnego przedmiotu
	if(j >= W[i]) return Val[i][j] = max(Calc(i+1,j), V[i] + Calc(i+1, j-W[i])); // Dwie możliwości	
}

int main()
{
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &n, &S); memset(Val, -1, sizeof Val); W[n] = INF;

		REP(i, n)
		{
			int ci, pi, ti; scanf("%d %d %d", &ci, &pi, &ti);
			W[i] = ti; V[i] = ci*pi;
		}

		int ans = Calc(0, S); printf("%d\n", ans);
	}

	return 0;
}