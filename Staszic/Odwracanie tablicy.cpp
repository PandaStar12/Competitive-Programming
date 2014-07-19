#include <cstdio>
#include <vector>

std::vector<int> V; int a,n;

int main()
{
  scanf("%d", &n);

  while(n--)
  {
    scanf("%d", &a);
    V.push_back(a);
  }

  for( int i = V.size()-1; i >= 0; i-- ) printf("%d ", V[i]);

  return 0;
}
