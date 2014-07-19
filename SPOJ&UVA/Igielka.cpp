/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(x, b, e) for(int x = b; x <= (e); ++x)
#define FORD(x, b, e) for(int x = b; x >= (e); --x)
#define REP(x, n) for(int x = 0; x < (n); ++x)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

inline void PrintINT(int a)
{
	if(a==0) return;
	else
	{
		PrintINT(a/10);
		fputc_unlocked( (a%10)+48, stdout);
	}
}
inline void readInt(int *n)
{
	register char c = 0;
	while (c < 33) c=fgetc_unlocked(stdin);
	(*n) = 0;
	while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
}


const int UNDEF = -1, MAXN = 105, MAXA = 205, MAXB = 205;
int dp[MAXN][MAXA][MAXB], A[MAXA], B[MAXB], n, a, b;

int Calc(int i, int j, int k)
{
	if(dp[i][j][k] != UNDEF) return dp[i][j][k];
	if(i == n || j <= 0 || k <= 0) return 0;
	if(j < A[i] || k < B[i]) return dp[i][j][k] = Calc(i+1, j, k);
	else return dp[i][j][k] = MAX(1+Calc(i+1, j-A[i], k-B[i]), Calc(i+1,j,k));
}

int main()
{
	readInt(&n); readInt(&a); readInt(&b);
	REP(i, n) { readInt(&A[i]); readInt(&B[i]); }

	FOR(i,0,n+1)
	{
		FOR(j, 0, a+1)
		{
			FOR(k, 0, b+1) dp[i][j][k] = UNDEF;
		}
	}

	int ans = Calc(0, a, b);
	
	if(ans == 0) fputc_unlocked('0', stdout);
	else PrintINT(ans);

	return 0;
}
