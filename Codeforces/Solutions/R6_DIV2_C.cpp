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

VI t, A, B; int n;

int main()
{
	scanf("%d", &n); t.resize(n); A.resize(n+1); B.resize(n+1);

	REP(i, n) scanf("%d", &t[i]);

	A[0] = 0;
	FOR(i, 1, n) A[i] = A[i-1] + t[i-1];

	B[n] = 0;
	FORD(i, n-1, 0) B[i] = B[i+1] + t[i];

	int counter = 0;


	FOR(i, 0, n-1)
	{
		if(A[i] <= B[i+1]) counter++;
		else break;
	}

	printf("%d %d\n", counter, n-counter);	
	return 0;
}
