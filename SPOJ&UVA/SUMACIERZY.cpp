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
const int INF = 10000001;

// Solution :

const int MAXN = 1000;
int A[MAXN+5][MAXN+5], m, n, t, c;

void Preprocessing()
{
	REP(i,n)
	{
		REP(j,m)
		{
			scanf("%d", &A[i][j]);

			if(i > 0) A[i][j] += A[i-1][j];
			if(j > 0) A[i][j] += A[i][j-1];
			if(i > 0 && j > 0) A[i][j] -= A[i-1][j-1];
		}
	}

	scanf("%d", &c); c--;
}

int MaxSum2D()
{
	int maxsum = -INF;

	REP(i,n) 
	{
		REP(j, m)
		{
			int k = i+c, l = j + c;

			if(k < n && l < m)
			{
				int pom = A[k][l];
				if(i > 0) pom -= A[i-1][l];
				if(j > 0) pom -= A[k][j-1];
				if(i > 0 && j > 0) pom += A[i-1][j-1];

				maxsum = max(maxsum, pom);	
			}
		}
	}

	return maxsum;
}

int main()
{
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d %d", &n, &m);
		Preprocessing();
		int Max = MaxSum2D();
		printf("%d\n", Max);
	}
}
