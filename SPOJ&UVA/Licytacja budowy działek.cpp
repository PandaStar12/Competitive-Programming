#include <cstdio>
#include <vector>
#include <algorithm>
 
#define PB push_back
#define IT iterator
#define MAX 10100
 
using namespace std;
typedef long long LL;
typedef vector<int> VI;
 
struct oferta
{
        int nr,a,b,cena;
        bool operator<(const oferta& O) const
        {
                return cena>O.cena;
        }
};
 
bool Vis[MAX*MAX]={};
oferta V[100]={};
int ofert=0;
LL Pesele[100]={};
int peseli=0;
VI M[100]={};
LL Koszt[100]={};
int aux[100]={};
 
bool cmp (int a, int b)
{
        return Pesele[a]<Pesele[b];
}
 
int main()
{
        int n; scanf("%d",&n);
 
        oferta O; LL pesel;
        while (scanf("%lld%d%d%d",&pesel,&O.a,&O.b,&O.cena)!=EOF)
        {       
                int i=0;
                while (i<peseli)
                {
                        if (Pesele[i]==pesel) break;
                        ++i;
                }
                if (i==peseli)
                {
                        Pesele[peseli++]=pesel;
                        O.nr=peseli-1;
                }
                else O.nr=i;
                V[ofert++]=O;
        }
        stable_sort(V,V+ofert);
 
        for (int i=0; i<ofert; ++i)
        {
                int nr=V[i].nr;
 
                LL ile=0;
                int w1=(V[i].a-1)/n+1,w2=(V[i].b-1)/n+1;
                int k1=(V[i].a-1)%n+1,k2=(V[i].b-1)%n+1;
 
                for (int w=w1; w<=w2; ++w)
                {
                        int x=(w-1)*n+(k1-1)%n+1;
                        int y=(w-1)*n+(k2-1)%n+1;
 
                        for (int k=x; k<=y; ++k)
                        {
                                if (Vis[k]) continue;
                                Vis[k]=true;
                                M[nr].PB(k);
                                ++ile;
                        }
                }
                Koszt[nr]+=ile*(LL)V[i].cena;
        }
        for (int i=0; i<peseli; ++i) aux[i]=i;
        sort(aux,aux+peseli,cmp);
 
        for (int pom=0; pom<peseli; ++pom)
        {
                int i=aux[pom];
                if (Koszt[i]==0) continue;
                printf("%lld ",Pesele[i]);
 
                std::vector<int> Witek;
 
                for (int j=0; j<M[i].size(); ++j)  Witek.push_back(M[i][j]);
                
                std::sort(Witek.begin(), Witek.end() );
                
                for( int j = 0; j < Witek.size(); j++ ) printf("%d ", Witek[j] );
                
                printf("%lld\n",Koszt[i]);
        }
        return 0;
}

