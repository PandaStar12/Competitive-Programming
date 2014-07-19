#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FOR(i,f,t) for(int i=f;i<=t;i++)
typedef std::vector<int> VI;
using namespace std;

VI Manacher(string &S, bool N) // N = true - nieparzyste, N = false - parzyste
{
	string x = "$" + S + "#"; VI R(x.size()+1, 0); int i = 1, t = 0;

	while(i <= x.size() - 1)
	{
		while( x[i - t - N] == x[i+t+1] ) t++;
	
		int k = 1; R[i] = t;

		while( k <= R[i] && R[i-k] != R[i] - k ) { R[i+k] = min( R[i-k], R[i]-k ); k++; }

		i += k; t = max( t-k, 0 );
	}

	return R;
}

int main()
{
	string S; cin >> S; int n = S.size(); VI R;

	long long int wynik = n;

	R = Manacher(S, true);  FOR(i,1,n) wynik += R[i];
	R = Manacher(S, false); FOR(i,1,n) wynik += R[i];

	cout << wynik;

	return 0;
}
