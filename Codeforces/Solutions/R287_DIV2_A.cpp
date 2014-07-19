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

int n, k, val, counter;
vector<pii> vec;

int main()
{
	scanf("%d %d", &n, &k);

	REP(i, n) {
		scanf("%d", &val);
		vec.PB(pii(val, i+1));
	}

	sort(ALL(vec));
	val = counter = 0;

	REP(i, n) {
		if(vec[i].ST + val <= k) counter++, val += vec[i].ST;
		else break;
	}

	printf("%d\n", counter);
	REP(i, counter) printf("%d ", vec[i].ND);

	return 0;
}
