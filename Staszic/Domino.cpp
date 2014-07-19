// Kółko Skierniewice

#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <cstring>
#include <string>
#include <queue>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;
#define PB push_back
#define MP make_pair
#define X first
#define Y second
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define FORE(i,x) for(__typeof((x).begin()) i=(x).begin();i != (x).end();++i)
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define SZ(x) int((x).size()) 
#define ALL(x) (x).begin(),(x).end()
#define CLR(x,w) memset((x),w,sizeof (x))
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef long long int lli;
typedef vector<lli> vl;
typedef pair<lli, lli> pll;
typedef vector<pll> vll;
#define MAXN 10005 

vi graf[MAXN];
int n, m, l, x, y, licznik;
bool odw[MAXN];

void dfs(int x)
{
	if(!odw[x])
	{
		odw[x] = true;
		FORE(i, graf[x])
			dfs(*i);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
  
	cin >> n >> m >> l;
	REP(i, m)
	{
		cin >> x >> y;
		graf[x].PB(y);
	}

	REP(i, l)
	{
		cin >> x;
		dfs(x);
	}

	FOR(i, 1, n)
		if(odw[i])
			++licznik;

	cout << licznik << endl;

	return 0;
}
