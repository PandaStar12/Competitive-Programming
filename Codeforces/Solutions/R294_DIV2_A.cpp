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

map<char, int> mapa;
int biale = 0, czarne = 0;

int main()
{
	mapa['q'] = 9; mapa['Q'] = 9;
	mapa['r'] = 5; mapa['R'] = 5;
	mapa['b'] = 3; mapa['B'] = 3;
	mapa['n'] = 3; mapa['N'] = 3;
	mapa['p'] = 1; mapa['P'] = 1;
	mapa['k'] = 0; mapa['K'] = 0;

	string s;

	while(cin >> s)
	{
		REP(i, SIZE(s))
		{
			if(s[i] <= 'z' && s[i] >= 'a') czarne += mapa[s[i]];
			if(s[i] <= 'Z' && s[i] >= 'A') biale += mapa[s[i]];
		}
	}

	if(biale > czarne) cout << "White\n";
	else if(biale == czarne) cout << "Draw\n";
	else cout << "Black\n";

	return 0;
}
