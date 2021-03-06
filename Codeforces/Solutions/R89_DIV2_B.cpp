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
typedef pair<int,int> pii;

const double EPS = 10e-9;
const int INF = 1000000001;

// Solution :

int n;

string S[10] ={"0", "0 1 0", "0 1 2 1 0","0 1 2 3 2 1 0", "0 1 2 3 4 3 2 1 0","0 1 2 3 4 5 4 3 2 1 0","0 1 2 3 4 5 6 5 4 3 2 1 0","0 1 2 3 4 5 6 7 6 5 4 3 2 1 0","0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0", "0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0"};

int main()
{
	cin >> n; stack<string> Stos;

	FORD(i, n, 0)
	{
		string ans = "";
		REP(I,2*i) ans += " ";
		ans += S[n-i];
		cout << ans << "\n";
		Stos.push(ans);
	}

	Stos.pop();

	while(Stos.empty() == false) cout << Stos.top() << "\n", Stos.pop();

	return 0;
}
