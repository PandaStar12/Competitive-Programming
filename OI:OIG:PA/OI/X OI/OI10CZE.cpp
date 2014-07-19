/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
	Zadanie "Czekolada" - I etap X OI
 */

#include <bits/stdc++.h>
using namespace std;

struct Choco { int koszt; bool iks; };
bool Compare(Choco A, Choco B) { return (A.koszt >= B.koszt); }
int x = 1, y = 1, n, m, a, S = 0;

int main()
{
	scanf("%d %d", &m, &n); vector<Choco> V;

	for(int i = 1; i < m ; i++) { scanf("%d", &a); Choco C; C.koszt = a; C.iks = true; V.push_back(C); }
	for(int i = 1; i < n ; i++) { scanf("%d", &a); Choco C; C.koszt = a; C.iks = false; V.push_back(C); }

	sort(V.begin(), V.end(), Compare);

	for(int i = 0; i < V.size(); i++)
	{
		if(V[i].iks == true) { S += V[i].koszt * y; x++;}
		else { S += V[i].koszt * x; y++;}
	}

	printf("%d\n", S); return 0;
}