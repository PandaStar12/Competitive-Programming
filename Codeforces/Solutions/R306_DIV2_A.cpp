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

bool check(string S)
{
	int a = S.find("AB"), b = S.find("BA");
	reverse(ALL(S));
	int c = S.size() - S.find("AB") - 2, d = S.size() - S.find("BA") - 2;

	if(a == string::npos || b == string::npos) return false;
	else if( abs(a-c) > 1 || abs(b-d) > 1 ) return true;
	else return false;
}

int main()
{
	string S; cin >> S;
	check(S) ? printf("YES\n") : printf("NO\n");
	return 0;
}
