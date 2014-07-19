/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
	Zadanie "Mapa Gęstości" - I etap VIII OI
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
#define REPP(x, n) for(int x = 250; x < 250+(n); ++x)

inline string IntToStr(int x) { ostringstream ss; ss << x; return ss.str(); }
inline int StrToInt(string x) { int i; istringstream iss(x); iss >> i; return i; }

typedef vector<int> VI;
typedef long long LL;
typedef pair<int,int> pii;

const double EPS = 10e-9;
const int INF = 10000001;

// Solution :

const int MAXN = 250;
int A[MAXN+5][MAXN+5], W[MAXN+5][MAXN+5], n, r, t;
map<pii, int> Map;

int Sum(int x, int y)
{
	if(x < 0 || y < 0) return 0;
	else if(x >= n && y >= n) return A[n-1][n-1];
	else if(x >= n) return A[n-1][y];
	else if(y >= n) return A[x][n-1];
	else return A[x][y];
}

int main()
{
	scanf("%d %d", &n, &r);

	REP(y, n) 
	{
		int pom = 0;
		REP(x, n)
		{
			scanf("%d", &t); pom += t; A[x][y] = Sum(x, y-1) + pom;
		}
	}

	REP(y, n)
	{
		REP(x, n) printf("%d ",Sum(x+r,y+r) + Sum(x-r-1,y-r-1) - Sum(x+r,y-r-1)- Sum(x-r-1,y+r));
		printf("\n");
	}

	return 0;
}
