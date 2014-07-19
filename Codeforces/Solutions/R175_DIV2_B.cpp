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

int solve(int n, int t, int s)
{
	if(t == s) return 0;

	VI Edges(n+1);
	FOR(i, 1, n) scanf("%d", &Edges[i]);
	int w = 0, i = Edges[s];

	while(i != t)
	{
		if(i == s) return -1;
		else w++, i = Edges[i];
	}

	return w+1;
}

int main()
{
	int n, t, s; scanf("%d %d %d", &n, &s, &t);
	printf("%d\n", solve(n,t,s));

	return 0;
}
