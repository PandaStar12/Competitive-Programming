/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
using namespace std;
#define FOR(x, b, e) for(int x = b; x <= (e); x++)

// Solution :

const int MAXN = 1000;

long long int A[MAXN*2+5][MAXN*2+5], dp[MAXN*2+5][MAXN*2+5], n, r, a, b, c, x;

long long int Sum(long long int x1, long long int y1, long long int x2, long long int y2)
{
    x1 = max((long long)1, x1);
    y1 = max((long long)1, y1);
    x2 = min((long long)2*n-1, x2);
    y2 = min((long long)2*n-1, y2);

    return dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1];
}

int main()
{
    scanf("%lld %lld", &n, &r);

    FOR(i, 1, n) FOR(j,1,n) scanf("%lld", &x), A[i+j-1][j-i+n] = x; // Wczytywanie i obracanie planszy

    FOR(i,1,2*n) FOR(j,1,2*n)
    {
        dp[i][j] = A[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
    }

    while(r--)
    {
        scanf("%d %d %d", &a, &b, &c);
        long long int iks = a+b-1, igrek = b-a+n;
        long long int sum = Sum(iks-c, igrek-c, iks+c, igrek+c);
        printf("%lld\n", sum);
    }

	return 0;
}

/* 5 2 6 3 0 0 9 7 1 4 0 5 0 5 0 0 2 0 0 0 8 0 1 2 0 0 0 2 2 1 4 5 2 */