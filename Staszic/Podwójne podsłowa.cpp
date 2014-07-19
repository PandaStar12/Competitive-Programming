// 60/100 :(

#include <cstdio>
#include <vector>
#define FOREACH(i,v) for(VAR(i,v.begin());i!=v.end();i++)
#define FORD(i,f,t) for(int i=f;i>=t;i--)
#define FOR(i,f,t) for(int i=f;i<=t;i++)
#define REP(i,n) for(int i=0;i<n;i++)
#define VAR(i,v) __typeof(v)i=v
typedef long long int LL;
typedef std::vector<LL> VLL;
typedef std::vector<int> VI;
using namespace std;

const LL PrimA = 70032301ll, PrimB = 1000000007ll, Iks = 400051; int n, m, a, wynik;
VI Text; VLL HaszA, HaszB, IksAPow, IksBPow;

inline void Haszuj(VI &A, VLL &H, LL P, int x)	// A - tekst, H - hasz, P - l. pierwsza, x - iks, taki ze |x| > 2|A|
{
	H[n] = A[n]; 
	FORD(i,n-1,1) H[i] = ( A[i] + (long long)(x * H[i+1]) ) % P;
}

inline LL HaszDlaPodslowa(VLL &H, VLL &XPow, const LL P, int i, int j)
{ 
	LL w = H[i] - XPow[j-i+1] * H[j+1]; w %= P;
	return w;
}

inline bool CzyPodwojne(int i, int j)
{
	if( HaszDlaPodslowa(HaszA, IksAPow, PrimA, i, (i+j)/2) == HaszDlaPodslowa(HaszA, IksAPow, PrimA, (i+j+1)/2, j) )
	{
		if( HaszDlaPodslowa(HaszB, IksBPow, PrimB, i, (i+j)/2) == HaszDlaPodslowa(HaszB, IksBPow, PrimB, (i+j+1)/2, j) ) return true;
		else return false;
	}
	else return false;
}

inline void Init(void)
{
	scanf("%d", &n); char c;

	Text.resize(n+1); HaszA.resize(n+1); HaszB.resize(n+1); IksAPow.resize(n+2); IksBPow.resize(n+2); // Resizowanie tablic

	FOR(i, 0, n) { scanf("%c", &c); Text[i] = (int)c - 96; }

	IksAPow[0] = IksBPow[0] = 1; 

	FOR(i, 1, n+1) { IksAPow[i] = (IksAPow[i-1]*Iks)%PrimA; IksBPow[i] = (IksBPow[i-1]*Iks)%PrimB; }

	Haszuj(Text, HaszA, PrimA, Iks); Haszuj(Text, HaszB, PrimB, Iks);
}

inline void Odpowiadaj(void)
{
	scanf("%d", &m);

	while(m--)
	{
		int i, j; scanf("%d %d", &i, &j);

		if( CzyPodwojne(i,j) == true) printf("TAK\n");
		else printf("NIE\n");
	}
}

int main()
{
	Init();
	Odpowiadaj();

	return 0;
}
