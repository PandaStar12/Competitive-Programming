#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000
 
inline void readINT( unsigned int *n )
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
class Vector    
{       
        private:
 
        unsigned int V[10001];          
        unsigned int SIZE;              
        
        public:
        
        unsigned int Push_Back( unsigned int x )
        {
                V[SIZE] =  x;
                SIZE++;
        }
        
        unsigned int Size()
        {
                return SIZE;
        }
        
        
        Vector()
        {
                SIZE = 0;
        }
        
        unsigned int operator[]( unsigned int x )
        {
                return V[x];
        }
        
        void Pop_Back(void)
        {
                SIZE--;
        }
};
 
 
unsigned int N, K, lb, ub;
 
Vector g_next[MAX_N];
 
bool cycle;
bool visited[MAX_N];
 
unsigned int ord[MAX_N];
unsigned int ord1[MAX_N];
 
void dfs(unsigned int n)
{
        visited[n] = true;
        
        for (unsigned int i = 0; i < g_next[n].Size(); i++ )
        {
                unsigned int s = g_next[n][i];
                
                if (ord[s] == ub)
                {
                        cycle = true;
                        return;
                }
                
                if (!visited[s] && ord[s] < ub)
                {
                        dfs(s);
                        if (cycle) return;
                }
        }
}
 
inline void allocate(unsigned int n, unsigned int i)
{
        ord[n] = i;
        ord1[i] = n;
}
 
void shift()
{
        Vector L;
        unsigned int shift = 0, i, j;
 
        for ( i = lb; i <= ub; i++ )
        {
                unsigned int w = ord1[i];
                
                if (visited[w])
                {
                        L.Push_Back(w);
                        shift++;
                }
                
                else
                        allocate(w, i - shift);
        }
 
        for ( j = 0; j < L.Size(); j++ )
        {
                allocate(L[j], i-shift);
                i++;
        }
}
 
bool add_edge(unsigned int x, unsigned int y)
{
        cycle = false;
        
        for (unsigned int i = 0; i < N; i++) visited[i] = false;
 
        lb = ord[y];
        ub = ord[x];
        
        if (lb <= ub)
        {
                dfs(y);
                if (cycle) return true;
                shift();
        }
        
        return cycle;
}
 
int main()
{
        readINT(&N);
        readINT(&K);
 
        for ( unsigned int i = 0; i < N; i++ )
        {
                ord[i] = i;
                ord1[i] = i;
        }
 
        for ( unsigned int i = 0; i < K; i++ )
        {
                unsigned int a, b;
                
                readINT(&a);
                readINT(&b);
                
                --a; --b;
 
                g_next[a].Push_Back(b);
 
                if (add_edge(a,b))
                {
                        fprintf(stdout, "%u %u\n", a+1, b+1);
                        g_next[a].Pop_Back();
                }
        }
 
        fputc_unlocked('0', stdout);
        fputc_unlocked(' ', stdout);
        fputc_unlocked('0', stdout);
        fputc_unlocked('\n', stdout);
 
        return 0;
}



