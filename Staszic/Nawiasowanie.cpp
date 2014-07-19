#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> stos;
vector<pair<int, int> >wynik;
char c;

int main(){
  
	scanf("%d\n", &n);
	for(int i = 1; i <= 2*n; i++){
		scanf("%c", &c);
		if(c == '(') 
			stos.push_back(i);
		else{
			if(stos.empty()){
				cout << "NIE" << endl;
				return 0;
			}
			wynik.push_back(make_pair(stos.back(), i));
			stos.pop_back();
		}
	}

	if(!stos.empty()){
		cout <<"NIE"<< endl;
		return 0;
	}

	printf("TAK\n");
	for(int i = 0; i < wynik.size(); i++)
		printf("%d %d\n", wynik[i].first, wynik[i].second);

  return 0;
}


