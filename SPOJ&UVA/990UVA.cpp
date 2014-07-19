/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

// Sorry, it's quite ugly code :/

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

struct Item
{
	string str; int num, earn;

	Item(string s = "", int n = 0, int e = 0)
	{
		str = s; num = n; earn = e;
	}
};

const int MAXN = 30, MAXS = 1000, UNDEF = -1;
int tc = 0, t, n, w, x, y, S, W[MAXN+5], V[MAXN+5], Val[MAXN+5][MAXS+5];
bool Used[MAXN+5][MAXS+5];

int CalcVal(int i, int j)
{
	if(j <= 0 || i == n) return 0;
	if(Val[i][j] != UNDEF) return Val[i][j];
	else
	{
		int A, B;

		if(j >= W[i]) A =  V[i] + CalcVal(i+1, j-W[i]);
		else A = 0;

		B = CalcVal(i+1, j);
		if(A > B) Used[i][j] = true;
		return Val[i][j] = max(A,B);
	}
}


int main()
{
	while(scanf("%d %d %d", &S, &w, &n) != EOF)
	{
		if(tc > 0) printf("\n");
		tc++;

		memset(Val, -1, sizeof Val); memset(Used, 0, sizeof Used);
		REP(i, n) { scanf("%d %d", &x, &y); W[i] = x*3*w; V[i] = y; }

		int ansval = CalcVal(0,S);
		int i = 0, j = S, counter = 0; VI Ans1, Ans2;

		while(i < n)
		{
			if(Used[i][j])
			{
				Ans1.push_back(W[i]/3/w); Ans2.push_back(V[i]);
				counter++;
				j -= W[i];
			}

			i++;
		}

		printf("%d\n%d\n", ansval, counter);
		REP(i, counter) printf("%d %d\n", Ans1[i], Ans2[i]);
	}

	return 0;
}