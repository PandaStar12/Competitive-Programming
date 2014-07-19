#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100;
const int INF = 999999999;
const int UNDEF = -1;

int dp[MAXN+1][MAXN+1], T[MAXN+1], n;

void Prepare()
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++) dp[i][j] = UNDEF;	
	}
}

inline int Sum(int i, int j)
{
	int s = 0;
	for(int k = i; k <= j; k++) { s += T[k]; s %= 100; }
	return s;
}

int Mixtures(int i, int j)
{
	if(dp[i][j] != UNDEF) return dp[i][j];

	if(i == j) return dp[i][j] = 0;
	else if(j == i+1) return dp[i][j] = T[i]*T[j];
	else
	{
		dp[i][j] = INF;

		for(int k = i; k < j; k++)
		{
			int cost = Mixtures(i, k) + Mixtures(k+1, j) + Sum(i,k) * Sum(k+1,j);

			if(cost < dp[i][j]) dp[i][j] = cost;
		}

		return dp[i][j];
	}
}

int main()
{
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 1; i <= n; i++) scanf("%d", &T[i]);
		Prepare(); int ans = Mixtures(1,n);
		printf("%d\n", ans);	
	}

	return 0;
}