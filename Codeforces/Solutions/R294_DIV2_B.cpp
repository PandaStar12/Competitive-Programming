/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
//#include "header.h"
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

int main()
{
	int n; int x; scanf("%d", &n);

	int xor1 = 0, xor2 = 0, xor3 = 0;
	int ans1, ans2;

	REP(i, n)
	{
		scanf("%d", &x); xor1 ^= x;
	}

	REP(i, n-1)
	{
		scanf("%d", &x); xor2 ^= x;
	}

	REP(i, n-2)
	{
		scanf("%d", &x); xor3 ^= x;
	}

	ans1 = xor1^xor2; ans2 = xor2^xor3;

	printf("%d\n%d\n", ans1, ans2);

	return 0;
}
