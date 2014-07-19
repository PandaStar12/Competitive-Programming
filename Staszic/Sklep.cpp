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
#define MAXN 1000005

int n, m, start, koniec;
char sklep[MAXN], c;
vi graf[MAXN];

int BFS()
{
    queue<pii> Q;     
    vi odw(MAXN, false);
	pii ind = MP(-1, 0);

    odw[start] = true;
    Q.push(MP(start, 0));
    
    while(ind.X != koniec)
    {
		//cout << ind.X << " " << ind.Y << endl;

        ind = Q.front();
        Q.pop();
		int i = ind.X / m, j = ind.X % m;

		if(sklep[ind.X] != 'R')
		{
			if(j != m - 1)
				if (!odw[i * m + j + 1])
				{
					odw[i * m + j + 1] = true;
					Q.push(MP(i * m + j + 1, ind.Y + 1));
				}
			if(j != 0)
				if (!odw[i * m + j - 1])
				{
					odw[i * m + j - 1] = true;
					Q.push(MP(i * m + j - 1, ind.Y + 1));
				}
			if(i != n - 1)
				if (!odw[(i + 1) * m + j])
				{
					odw[(i + 1) * m + j] = true;
					Q.push(MP((i + 1) * m + j, ind.Y + 1));
				}
			if(i != 0)
				if (!odw[(i - 1) * m + j])
				{
					odw[(i - 1) * m + j] = true;
					Q.push(MP((i - 1) * m + j, ind.Y + 1));
				}
		}
    } 

    return ind.Y; 
}  

int main(){
    ios_base::sync_with_stdio(0);
	
	cin >> n >> m;
	
	REP(i, n)
		REP(j, m)
		{
			cin >> c; 
			sklep[i * m + j] = c;
			
			if(c == 'W')
		 		start = i * m + j;
			if(c == 'T')
		 		koniec = i * m + j;
		}

	cout << BFS() << endl;

    return 0;
}



