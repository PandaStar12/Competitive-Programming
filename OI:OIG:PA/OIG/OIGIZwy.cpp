#include <iostream>
#include <algorithm>
using namespace std;

long long int n, x;
char c;
pair<long long int, char> tab[100];

int main()
{
	cin >> n;
	c = 'A';
	for(int i = 0; i < n; ++i)
	{
		cin >> x;
		tab[i] = make_pair(x, c++);
	}

	sort(tab, tab + n);

	for(int i = 0; i < n; ++i)
		if(tab[i].first == tab[n - 1].first)
			cout << tab[i].second;
	cout << endl;

	return 0;
}