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

VI T, Pref, Suf;
int ans, n;

int main()
{
    scanf("%d", &n);
    T.resize(n+1); Pref.resize(n+1); Suf.resize(n+2);
    Pref[0] = 0; Suf[n+1] = 0; ans = n+1;

    FOR(i, 1, n) scanf("%d", &T[i]), Pref[i] = Pref[i-1] + 1 - T[i];  
    FORD(i, n, 1) Suf[i] = T[i] + Suf[i+1];
    FOR(i, 0, n) ans = min(Pref[i] + Suf[i+1], ans);

    printf("%d\n", ans);

	return 0;
}
