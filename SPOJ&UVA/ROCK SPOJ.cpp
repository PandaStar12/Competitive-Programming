#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200;
const int INF = 999999999;
const int UNDEF = -1;

int T[MAXN+1], dp[MAXN+1][MAXN+1], S[MAXN+1], t, n;
string s;

inline void Prepare()
{
	for(int i = 0; i < n; i++)
	{
		if(s[i] == '1') T[i+1] = 1;
		else T[i+1] = 0;
	}

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			dp[i][j] = UNDEF;
		}
	}

	S[0] = 0;
	for(int i = 1; i <= n; i++) S[i] = S[i-1] + T[i];
}

inline int Sum(int i, int j) { int sum = S[j]-S[i-1]; return sum; }
inline int Len(int i, int j) { return (j-i+1); }

int Rock(int i, int j)
{
	if(dp[i][j] != UNDEF) return dp[i][j];
	else
	{
		if((2*Sum(i,j)) > Len(i,j)) return dp[i][j] = Len(i, j);
		else
		{
			dp[i][j] = 0;

			for(int k = i; k < j; k++)
			{
				dp[i][j] = max(Rock(i,k) + Rock(k+1, j), dp[i][j]);
			}

			return dp[i][j];
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false); cin >> t;

	while(t--)
	{
		cin >> n >> s; Prepare();
		int ans = Rock(1, n);
		printf("%d\n", ans);
	}
	
	return 0;
}