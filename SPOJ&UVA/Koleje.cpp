#include <cstdio>
#include <algorithm>
#define MAX 131072
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
 
inline void ReadInteger(int *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
} 
 
struct tre 
{ 
        int v,w; 
} drz[MAX+5];
 
int M=65536;
 
void build()
{
        REP(i,MAX) drz[i].v=drz[i].w=0;   
}
 
//v-wierzcholek, s-suma od gory
int query(int OD, int DO, int from, int to, int v, int s){ 
        if(from<=OD&&to>=DO) return s+drz[v].v+drz[v].w;             
        int a,res=0;
        a=(OD+DO)/2;
        if(from<=a) res=max(res,query(OD,a,from,to,v*2,drz[v].v+s));   
        if(to>a) res=max(res,query(a+1,DO,from,to,v*2+1,drz[v].v+s));
        return res;
}
 
//przedzialy obustronnie domkniete
void insert(int OD, int DO, const int &from, const int &to, const int &c, int v){
        if(from<=OD&&to>=DO) drz[v].v+=c;             
        else{
                int a = (OD+DO)/2;
                if(from<=a) insert(OD,a,from,to,c,v*2);   
                if(to>a) insert(a+1,DO,from,to,c,v*2+1);
                drz[v].w = max(drz[v*2].w+drz[v*2].v,drz[v*2+1].w+drz[v*2+1].v);
        }
}
 
int main(){
        int n,a,b,c,m,tmp,miasta;
        ReadInteger(&miasta);
        ReadInteger(&m);
        ReadInteger(&n);
        REP(i,n){
                ReadInteger(&a);
                ReadInteger(&b);
                ReadInteger(&c);
                a--; 
                b-=2;
                tmp=query(0,M-1,a,b,1,0);
                if(tmp+c<=m){
                        insert(0,M-1,a,b,c,1);
                        fputc_unlocked('T', stdout);
                }
                else fputc_unlocked('N', stdout);
                
                fputc_unlocked(10, stdout);
        }
        return 0;   
}
