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
#include <list>
#include <stack>
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

// algorytm dziala w czasie O(N*loglog(N))
#define MAXN 8000005
int tab[MAXN];
void sito(int N) {
	FOR(i,0,N-1) tab[i] = i;

	for(int i = 2; i * i < N; i++)
		if(tab[i] == i)
			for(int j = i * i; j < N; j += i)
				if(tab[j] == j)
					tab[j] = i;
}

int n, x;

int main(){

	sito(MAXN);
	scanf("%d", &n);
	REP(i,n){
		scanf("%d", &x);
		printf("%d", tab[x]); 
		x /= tab[x];
		while(x!=1) {
			printf("*%d", tab[x]); 
			x /= tab[x];
		}
		printf("\n"); 
	}

	return 0;
}
