/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

#include <bits/stdc++.h>
//#include "header.h"
using namespace std;

#define FOR(x, b, e) for(int x = b; x <= (e); x++)
#define FORD(x, b, e) for(int x = b; x >= (e); x--)
#define REP(x, n) for(int x = 0; x < (n); x++)
#define VAR(v, n) __typeof(n) v = (n)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(x) ((int)(x).size())
#define FOREACH(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define PB push_back
#define ST first
#define ND second

typedef vector<int> VI;
typedef long long LL;
typedef pair<int,int> pii;

// Solution :

inline string change(string s) {
	string ans = "";
	REP(i, SIZE(s)) ans += (islower(s[i]) ? toupper(s[i]) : tolower(s[i]));
	return ans;
}

inline int number_of_uppercase_letters(string s) {
	int counter = 0;
	REP(i, SIZE(s)) counter += (isupper(s[i]) ? 1 : 0);
	return counter;
}

int main()
{
	string s; cin >> s;
	int n = number_of_uppercase_letters(s);

	if(n == SIZE(s) || (islower(s[0]) && n == SIZE(s) - 1)) cout << change(s);
	else cout << s;

	return 0;
}