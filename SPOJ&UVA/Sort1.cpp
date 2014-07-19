#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stdlib.h>

struct Punkt
{
	std::string Nazwa;
	signed int X;
	signed int Y;
	float Wynik;
};

bool Mniejsze( Punkt A, Punkt B )
{
	if( A.Wynik < B.Wynik ) return true;
	else return false;
}

int main() 
{
	int t, n;

	std::cin >> t;
	
	while(t--)
	{
		std::cin >> n;
		std::vector<Punkt> Wektor;
		
		while(n--)
		{
			std::string Tekst;
			int a, b;
			std::cin >> Tekst >> a >> b;
			Punkt P;
			P.Nazwa = Tekst;
			P.X = a;
			P.Y = b;
			P.Wynik = sqrt( a*a + b*b );
			Wektor.push_back(P);
		}
		
		std::sort(Wektor.begin(), Wektor.end(), Mniejsze);
		
		for( unsigned int i = 0; i < Wektor.size(); i++ ) 
		{
			std::cout << Wektor[i].Nazwa << " " << Wektor[i].X << " " << Wektor[i].Y << std::endl;
		}
		
		if(t != 0) std::cout << std::endl;
		
	}
	
	return 0;
}
