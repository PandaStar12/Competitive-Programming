#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<pair<int,int> > stos;

int main(){
	cin >>n;
	for(int i = 1; i <= n; i++){
        scanf("%d", &k);
        while(!stos.empty() && k >= stos.back().second)
			stos.pop_back();
 		stos.empty() ? printf("-1\n") : printf("%d\n", stos.back().first);
		stos.push_back(make_pair(i, k));
    }
    return 0;
}

