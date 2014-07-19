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

const int MAXN = 100, MAXS = 50000, UNDEF = -1;
int t, n, d[MAXS+5], m[MAXN+5], M, MaxSum;

int main()
{
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n); MaxSum = M = 0;

		if(n == 0) { printf("0\n"); continue; }

		FOR(i,1, n) { scanf("%d", &m[i]); MaxSum += m[i]; }
		FOR(i,0,MaxSum+1) d[i] = UNDEF;
		M = MaxSum/2; d[0] = 0;

		FOR(i,1,n)
		{
			FORD(j, M, m[i])
			{
				if( d[j-m[i]] != UNDEF) d[j] = i;
			}
		}

		FORD(i,M,0)
		{
			if(d[i] != UNDEF)
			{
				int a = i; int b = MaxSum - a;
				printf("%d\n", abs(a-b));
				break;
			}
		}
	}

	return 0;
}