#include <iostream>
#include <list>
using namespace std;

int main() 
{
       int i,liczba;
       while(cin>>i)
       {
               list<int>tab;
               while(true)
               {
                       if(cin.peek()=='\n') break;
                       else 
                       {       
                       cin>>liczba;
                       tab.push_back(liczba);
                       }
               }
               tab.sort();
               tab.unique();
               list<int>::iterator it = tab.end();
               if(i>tab.size()) cout<<"-"<<endl;
               else 
               { 
                       for(int x=0;x<i;x++) it--;
                        
                       cout<<*it<<endl; 
               }
               
       }
       return 0;
}
