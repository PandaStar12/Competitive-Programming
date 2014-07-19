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

int d, sumTime, remainingTime;
VI minTime, maxTime, extraTime;

int main()
{
	scanf("%d %d", &d, &sumTime);
	minTime.resize(d); maxTime.resize(d); extraTime.resize(d);

	remainingTime = sumTime;

	REP(i, d)
	{
		scanf("%d %d", &minTime[i], &maxTime[i]);
		extraTime[i] = maxTime[i] - minTime[i];
		remainingTime -= minTime[i];
	}

	if(remainingTime < 0) printf("NO");
	else
	{
		REP(i, d)
		{
			if(remainingTime == 0) break;

			if(remainingTime > extraTime[i]) remainingTime -= extraTime[i], extraTime[i] = 0;
			else if(remainingTime == extraTime[i]) remainingTime = extraTime[i] = 0;
			else extraTime[i] -= remainingTime, remainingTime = 0;
		}

		if(remainingTime != 0) printf("NO");
		else
		{
			printf("YES\n"); int i = 0;

			for(; i < d-1; i++) printf("%d ", maxTime[i] - extraTime[i]);
			printf("%d", maxTime[i] - extraTime[i]);
		}
	}

	return 0;
}
