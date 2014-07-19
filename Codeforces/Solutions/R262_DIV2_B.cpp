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

typedef vector<int> VI;
typedef long long LL;
typedef pair<int,int> pii;
typedef long long LL;
typedef vector<LL> VLL;

inline string IntToStr(int x) { ostringstream ss; ss << x; return ss.str(); }
inline LL StrToInt(string x) { LL i; istringstream iss(x); iss >> i; return i; }

const double EPS = 10e-9;
const int INF = 1000000001;

// Solution :

LL a, b, c;

LL power(LL x, LL y)
{
	if(y == 0) return 1;
	else
	{
		LL ans = x;
		FOR(i, 2, y) ans *= x;
		return ans;
	}
}

LL GetSumOfDigits(LL x)
{
	int sum = 0;
	string s = IntToStr(x);

	REP(i, s.size())
	{
		sum += s[i] - '0';
	}

	return sum;
}

bool Check(LL x)
{
	if(x <= 0) return false;
	if(x >= 1000000000) return false;

	LL Sx = (LL) GetSumOfDigits(x);
	Sx = power(Sx,a);
	Sx *= b;
	Sx += c;

	if(x == Sx) return true;
	else return false;
}

VLL Solve()
{
	VLL ans;

	FOR(Sx, 1, 81)
	{
		LL x = power(Sx, a);
		x *= b;
		x += c;

		if(Check(x) == true) ans.PB(x);
	}

	sort(ALL(ans)); return ans;
}

int main()
{
	cin >> a >> b >> c;
	VLL answer = Solve();

	printf("%d\n", (int)answer.size());

	if(answer.size() > 0)
	{
		REP(i, answer.size()) cout << answer[i] << " ";
	}

	cout << "\n";
	return 0;
}
