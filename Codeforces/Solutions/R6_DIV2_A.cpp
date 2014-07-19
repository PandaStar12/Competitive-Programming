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

int a, b, c, d;

bool CheckTriple(int x, int y, int z)
{
	VI V; V.resize(3);
	V[0] = x; V[1] = y; V[2] = z;
	sort(ALL(V));

	if(V[0] + V[1] > V[2]) return true;
	else return false;
}

bool CheckEquality(int x, int y, int z)
{
	VI V; V.resize(3);
	V[0] = x; V[1] = y; V[2] = z;
	sort(ALL(V));

	if(V[0] + V[1] == V[2]) return true;
	else return false;
}

int main()
{
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(CheckTriple(a,b,c) || CheckTriple(a,b,d) || CheckTriple(b,c,d) || CheckTriple(a,c,d)) printf("TRIANGLE\n");
	else if(CheckEquality(a,b,c) || CheckEquality(a,b,d) || CheckEquality(b,c,d) || CheckEquality(a,c,d)) printf("SEGMENT\n");
	else printf("IMPOSSIBLE\n");

	return 0;
}
