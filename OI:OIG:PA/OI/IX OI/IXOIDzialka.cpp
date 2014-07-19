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

const double EPS = 10e-9;

// Solution :

const int MAXN = 2000;
int n, A[MAXN+5][MAXN+5], S[MAXN+5][MAXN+5];

int getMaxArea(int hist[], int n)   // from Geeks For Geeks
{
    stack<int> s;
 
    int max_area = 0; // Initalize max area
    int tp;  // To store top of stack
    int area_with_top; // To store area with top bar as the smallest bar
 
    // Run through all bars of given histogram
    int i = 0;
    while (i < n)
    {
        // If this bar is higher than the bar on top stack, push it to stack
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);

        else
        {
            tp = s.top();  // store the top index
            s.pop();  // pop the top
            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
 
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
 
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
 
    return max_area;
}

int main()
{
    scanf("%d", &n);

    REP(i, n) REP(j, n)
    {
        scanf("%d", &A[i][j]);
        A[i][j] == 1 ? A[i][j] = 0 : A[i][j] = 1;
    }

    REP(i, n) S[0][i] = A[0][i];
    FOR(i,1,n-1) REP(j, n) S[i][j] = A[i][j] == 0 ? 0 : 1 + S[i-1][j];

    int ans = 0;

    REP(i, n)
    {
        ans = max(ans, getMaxArea(S[i], n));
    }

    printf("%d\n", ans);

	return 0;
}

/* 5 0 1 0 1 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0 1 0 0 0 */