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
#define ORD(c) c-'a'

typedef long long LL;
typedef vector<LL> VI;
typedef pair<int,int> pii;

// Solution :

vector< map<LL, LL> > m;
string s;
VI val;
LL x, y;

int main()
{
	std::ios_base::sync_with_stdio(false); cin.tie(0);
	m.resize(26); val.resize(26);

	REP(i, 26) cin >> val[i];
	cin >> s;

	REP(i, s.size()) {
		int ord = ORD(s[i]);
		x += m[ord][y];
		y += val[ord];
		m[ord][y]++;
	}

	cout << x << "\n";

	return 0;
}
