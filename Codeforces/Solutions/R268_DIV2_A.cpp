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

bool t[105];

int main()
{
	REP(i,101) t[i] = false;

	int n; scanf("%d", &n);
	int counter = n;

	int p; scanf("%d", &p);

	while(p--)
	{
		int x; scanf("%d", &x);

		if(t[x] == false)
		{
			t[x] = true; counter--;
		}
	}

	scanf("%d", &p);

	while(p--)
	{
		int x; scanf("%d", &x);

		if(t[x] == false)
		{
			t[x] = true; counter--;
		}
	}

	if(counter == 0) printf("I become the guy.\n");
	else printf("Oh, my keyboard!\n");

	return 0;
}
