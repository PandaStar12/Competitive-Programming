#include <cstdio>
#include <vector>
#include <string>
 
#define FOREACH(i,v) for(typeof(v.begin())i=v.begin();i!=v.end();i++)
#define FOR(i,x,y) for(int i=x;i<=y;i++)
#define REP(i,n) for(int i=0;i<n;i++)
#define MAX 1000000
 
typedef std::vector<int> VI;
typedef std::string STR;
 
char WW[MAX+1], SS[MAX+1];
 
void Pref_Suf(STR S, VI &Pi, int n)     // Obliczenie funkcji prefiksowej dla słowa S[1...n]
{
        Pi[0] = -1; 
        int k = Pi[1] = 0;
 
        FOR(i, 2, n)
        {
                while( k > -1 && S[i] != S[k+1] ) k = Pi[k];
                Pi[i] = ++k;    
        }
 
}
int main()
{
        int t;
 
        scanf("%d", &t);
        
        while(t--)
        {
        
                STR s, w, pom; 
                int dw, dp;
        
                scanf("%d %s %s", &dw, WW, SS);
                w = WW;
                s = SS;
        
                pom = "#" + w + "#" + s;
                dp = pom.size();
                VI v(dp+1);
        
                Pref_Suf(pom,v,dp);
        
                for( int i = dw+2; i < dp; i++ ) if( v[i] == dw ) printf("%d\n", i-dw-dw-1);
        }
        
        return 0;
}

