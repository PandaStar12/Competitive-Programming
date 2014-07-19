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
#define MAXN 300000   

lli nwd(lli a, lli b) {
		return (b == 0) ? a : nwd(b, a % b);
}

int a, n;
lli suma, liczba;
multiset<int> S;

int main()
{
	scanf("%d", &n);
	REP(i,n){
		scanf("%d", &a);
		switch(a){
			case 0: a = nwd(liczba, suma); printf("%lld/%lld\n", suma/a, liczba/a); break;
			case 1: scanf("%d", &a); S.insert(a); suma += a; liczba++; break;
			case 2: a = *S.begin(); S.erase(S.begin()); suma -= a; liczba--; printf("%d\n", a); break;
			case 3: a = *(--S.end()); S.erase(--S.end()); suma -= a; liczba--; printf("%d\n", a); break;
		}
	}

	return 0;
}


