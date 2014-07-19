#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int a, n, suma;
vector<int> V;

int main()
{
  scanf("%d", &n);

  for( int i = 0; i < n; i++ ) { scanf("%d", &a); V.push_back(a); suma += a; }

  sort(V.begin(), V.end());

  for(int i = n/2, j = 0; i > 0; i--, j++)
  {
    suma += V[n-j-1] - V[j];
  }
  
  printf("%d", suma);

  return 0;

}
