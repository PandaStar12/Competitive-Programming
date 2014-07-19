/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <iostream>
#include <cmath>
using namespace std;

int a, c, b, d, x, y, z, t;

int main()
{
	cin >> a >> b >> c >> d;

	if(a == c)
	{
		x = a + b - d;
		y = b;
		z = c + b - d;
		t = d; 
	}
	else if(b == d)
	{
		x = a;
		y = b + a - c;
		z = c;
		t = d + a - c;
	}
	else if(abs(a - c) == abs(b - d))
	{
		x = a;
		y = d;
		z = c;
		t = b;
	}
	else
	{
		cout << "-1";
		return 0;
	}

	cout << x << " " << y << " " << z << " " <<  t << "\n";
	return 0;
}
