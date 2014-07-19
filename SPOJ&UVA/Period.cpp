#include <iostream>
#include <string>
#include <vector>
#define FOR(i,f,t) for(int i=f;i<=t;i++)
typedef std::vector<int> VI;
using namespace std;

void Pref( VI &P, string &S )
{
	int t = 0, i, n = S.size()-1; P.resize(n+2, 0);

	for( i = 2; i <= n; i++ )
	{
		while (t > 0 && S[t + 1] != S[i]) t = P[t];
		if( S[t+1] == S[i] ) t++;
		P[i] = t;
	}
}

int Pierwiastek_Pierwotny(string &S)
{
	S = "#" + S;
	VI P; Pref(P, S); int n = S.size()-1;

	FOR(i,2,n) if( i % (i-P[i]) == 0 && P[i] > 0 ) cout << i << " " <<  i/(i-P[i]) << "\n";
}

int main()
{
	std::ios_base::sync_with_stdio(false); // Debilne IO-Stream

	int T; cin >> T;

	FOR(t,1,T)
	{
		cout << "Test case #" << t << "\n";

		int n; cin >> n; string S; cin >> S;

		Pierwiastek_Pierwotny(S);
	}

	return 0;
}
