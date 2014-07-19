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

// Solution :

LL solve(int n)
{
	LL ans = 0; VI V(n);

	REP(i, n)
	{
		cin >> V[i];
		if(V[i] < 0) ans += abs(V[i]), V[i] = 0;
	}

	sort(ALL(V)); reverse(ALL(V));
	
	REP(i, n)
	{
		ans += abs(V[i] - (n-i));
	}

	return ans;
}

int main()
{
	std::ios_base::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	cout << solve(n) << "\n";

	return 0;
}
