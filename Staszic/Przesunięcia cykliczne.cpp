#include <cstdio>
#include <vector>

using namespace std;

int n, k, a;
vector<int> V;

int main()
{
  scanf("%d %d", &n, &k);

  while(n--)
  {
    scanf("%d", &a);
    V.push_back(a);
  }

  for( int i = k; i < V.size(); i++ ) printf("%d ", V[i]);
  for( int i = 0; i < k; i++ ) printf("%d ", V[i]);

  return 0;
}
