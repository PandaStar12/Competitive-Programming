#include<iostream>
#include<algorithm>

using namespace std;

long long int n,a,b,c,x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        c=b;
        b=max(a,b);
        a=c+x;
    }
    cout<<max(a,b)<<endl;
    return 0;
} 


