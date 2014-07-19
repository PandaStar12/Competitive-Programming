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
typedef pair<int,int> pii;

const double EPS = 10e-9;
const int INF = 1000000001;

// Solution:

const int MAXN = 1000000;
int A[MAXN], M[MAXN], M_id[MAXN], P[MAXN], n, x, y, t;
int L = 0, L_end = 0;

void PrintLIS(int end)	// LIS Computing by Sai Cheemalapati
{
    if(end < 0) return;
    PrintLIS(P[end]);
    printf("%d\n", A[end]);
}

void ComputeLIS() // LIS Computing by Sai Cheemalapati
{
	L = L_end = 0;

	REP(i, n)
	{
		int pos = lower_bound(M, M + L, A[i]) - M;
		M[pos] = A[i];
		M_id[pos] = i;
		P[i] = pos > 0 ? M_id[pos - 1] : -1;

		if(pos == L)
		{
			L++; L_end = i;
		}
	}
}

bool Comp(pii b1, pii b2)
{
    if (b1.first != b2.first)
        return b1.first < b2.first;
    return b1.second < b2.second;
}
int main()
{
	while(scanf("%d", &n) != EOF)
	{
		if(n == 0) { printf("*\n"); return 0; }

		vector<pii> V;

		REP(i,n) { scanf("%d %d", &x, &y); V.push_back(pii(x,y)); M[i] = M_id[i] = P[i] = 0; }

		sort(ALL(V), Comp);
		REP(i,n) A[i] = V[i].ND;

		ComputeLIS();
		printf("%d\n", L);
	}

	return 0;
}