/*
	Bartosz Jan Bednarczyk - "wiedzMAC"
	University Of Wroclaw
 */

// C++ 11 !!!!

#include <bits/stdc++.h>
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

inline string IntToStr(int x) { ostringstream ss; ss << x; return ss.str(); }
inline int StrToInt(string x) { int i; istringstream iss(x); iss >> i; return i; }

typedef vector<int> VI;
typedef long long LL;

const double EPS = 10e-9;
const int INF = 1000000001;
const LL MOD = 1000000007LL;

// Solution :

class Matrix
{
	public:
	LL M[4][4];

	Matrix(LL A[4][4])
	{
		REP(I,4) REP(J,4) M[I][J] = A[I][J];
	}
};

Matrix multiply(Matrix A, Matrix B)
{
	LL t[4][4] = {0}; Matrix Res(t);
	REP(I,4) REP(J,4) REP(K,4) Res.M[I][J] += (A.M[I][K]*B.M[K][J]) % MOD, Res.M[I][J] %= MOD;
	return Res;
}

Matrix power(Matrix A, int n)
{
	if(n == 1) return A;
	else
	{
		LL t[4][4] = {0};
		Matrix Temp = multiply(A, A);
		Temp = power(Temp, n / 2);
		if(n % 2 == 1) Temp = multiply(Temp, A);
		return Temp;
	}
}

LL ways(int n)
{
	if(n == 1) return 0;
	else
	{
		LL Base[4][4] = {{0,1,1,1}, {1,0,1,1}, {1,1,0,1}, {1,1,1,0}};
		Matrix BASE(Base);
		Matrix A = power(BASE, n);
		return A.M[3][3] % MOD;
	}
}

int main()
{
	int n; scanf("%d", &n);
	printf("%I64d\n", ways(n));
	return 0;
}
