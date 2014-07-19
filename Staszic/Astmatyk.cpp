/*
	Bartosz Bednarczyk
	Liceum Ogolnoksztalcace w Strzelcach Opolskich
	Zadanie : Astmatyk - KI STASZIC
 */

#include <cstdio>
#include <vector>
#include <cmath>
#define FOR(i,f,t) for(int i=f;i<=t;i++)
#define REP(i,n) for(int i=0;i<n;i++)
typedef std::vector<int> VI;
typedef std::vector<bool> VB;
#define MAX 100005

int n, m, H[MAX+1], maxh = 0, p, k, akt, wynik, x, y; 
VI V[MAX+1]; VB Visited; bool q;

void Query(int h, int v)	// Zapytanie czy da sie dojsc do konca dana wysokoscia
{
	if( Visited[v] == false) { Visited[v] = true; }
	else return;

	if( v == n ) { q = true; return; }

	REP( i, V[v].size() )
	{
		if( H[ V[v][i] ] <= h ) 
		{ 
			Query(h, V[v][i]); 
		}
	}
}

inline void Init()	// Przygotowanie tablic przed wyszukiwaniem
{
	q = false; Visited.clear(); Visited.resize(n+1, false);
}

int main()
{
	scanf("%d %d", &n, &m);

	FOR(i,1,n)	// Wczytywanie wysokosci
	{ 
		scanf("%d", &H[i]);

		if( maxh < H[i] ) maxh = H[i];	// Obliczanie najwiekszej wysokosci
	}

	FOR(i,1,m)	// Tworzenie grafu
	{
		scanf("%d %d", &x, &y);
		V[x].push_back(y); V[y].push_back(x);
	}

	p = H[1]; k = maxh; wynik = maxh;	// Poczatkowe dane do wyszukiwania

	while( p != k )	// Wyszukiwanie binarne po wyniku w przedziale [p;k]
	{
		akt = (p+k+1)/2; Init(); Query(akt, 1);

		if( q == true ) { wynik = akt; k = akt-1; }
		else { p = akt+1; }
	}

	Init(); Query(p, 1);	// Sprawdzanie czy p pasuje

	if( q == true && p < wynik ) wynik = p;	// JeĹli tak to zastap nim nowy wynik

	printf("%d\n", wynik);

	return 0;
}

