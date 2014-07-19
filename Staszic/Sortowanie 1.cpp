#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int a, n;
vector<int> V;

int main()
{
  scanf("%d", &n);

  while(n--)
  {
    scanf("%d", &a);
    V.push_back(a);
  }

  sort(V.begin(), V.end());

  for(int i = V.size()-1; i >= 0; i--) printf("%d ", V[i]);

  return 0;
}
