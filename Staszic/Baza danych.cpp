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
#define MAXN 300000   

map<string, int>baza;
int n, ilosc, cus;
string id;

int main(){
  ios_base::sync_with_stdio(0);
  cin >> n;
  REP(i, n)
  {
         cin >> id >> ilosc;
         if((baza[id]+ilosc)>=0)
         {
                               baza[id]+=ilosc;
                               cus=baza[id];
                               printf("%d\n", cus);
         }
         else printf("NIE\n");
  }
  return 0;
} 


