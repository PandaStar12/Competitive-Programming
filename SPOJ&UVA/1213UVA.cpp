/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(x, b, e) for(int x = b; x <= (e); ++x)
#define FORD(x, b, e) for(int x = b; x >= (e); --x)
#define REP(x, n) for(int x = 0; x < (n); ++x)
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

// Solution :

const int INF = 1000000001;
const int MAXPRIMES = 187;
const int Primes[MAXPRIMES] = {2,3,5,7,11,13,17,19,23,29, 31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117};
int dp[195][1125][20], n, k;


int Calc(int i, int j, int k) // i -index, j - rem n, k - rem k
{
	if(j == k && k == 0) return 1;
	else if(j < 0 || i >= 187 || k == 0) return 0;
	else
	{
		if(dp[i][j][k] != -1) return dp[i][j][k];
		else return dp[i][j][k] = Calc(i+1, j, k) + Calc(i+1, j-Primes[i], k-1);
	}
}

inline void Clear(int n, int k)
{
	REP(i, MAXPRIMES)
	{
		FOR(j, 0, n)
		{
			FOR(kk, 0, k) dp[i][j][kk] = -1;
		}
	}
}

int main()
{
	Clear(1121,15);

	while(scanf("%d %d", &n, &k) != EOF)
	{
		if(n == 0 && k == 0) return 0;
		else
		{
			int ans = Calc(0, n, k);
			printf("%d\n", ans);
		}
	}

	return 0;
}