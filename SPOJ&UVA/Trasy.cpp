//Sprawdzanie limitu czasu wzorcowki + fast io
 
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <set>
#include <queue>
 
inline void PrintString(char *a, int b) 
{
        register unsigned int i; 
        for(i=0; i<b; ++i) fputc_unlocked(a[i], stdout);
}
 
inline void ReadInteger(int *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
}
 
using namespace std;
 
int graph[128][128];
int n;
 
inline int tomask( string &s )
{
    int ma = 0;
    for( int i = 0; i < ( int )s.size(); i++ ) ma |= ( 1 << s[i] );
    return ma;
}
 
bool bfs( int seen, int a, int b )
{
    if( a == b ) return true;
    queue< int > q;
    q.push( a );
    while( !q.empty() )
    {
        int u = q.front();
        q.pop();
        for( int i = 0; i < n; i++ ) if( !( seen & ( 1 << i ) ) && graph[u][i] >= 0 )
        {
            if( i == b ) return true;
            seen |= ( 1 << i );
            q.push( i );
        }
    }
    return false;
}
 
int main()
{
    int m, prob = 0;
    int d;
    ReadInteger(&d);
    while (d--) {
        ReadInteger(&n);
        ReadInteger(&m);
        if( prob ) fputc_unlocked('\n', stdout);
        ++prob;
        
        memset( graph, -1, sizeof( graph ) );
        for( int i = 0; i < m; i++ ) 
        {
            int u, v, d;
            ReadInteger(&u);
            ReadInteger(&v);
            ReadInteger(&d);
            u--; v--;
            graph[u][v] = graph[v][u] = d;
        }
        int s, t, maxd;
        ReadInteger(&s);
        ReadInteger(&t);
        ReadInteger(&maxd);
        s--; t--;
        
        set< pair< int, pair< int, string > > > q;
        q.insert( make_pair( 0, make_pair( s, string() + ( char )s ) ) );
        bool got1 = false;
        while( !q.empty() )
        {
            __typeof( q.begin() ) itr = q.begin();
            int dsofar = itr->first;
            int u = itr->second.first;
            string path = itr->second.second;
            q.erase( itr );
            
            if( u == t )
            {
                got1 = true;
                printf( "%d:", dsofar );
                for( int z = 0; z < ( int )path.size(); z++ )
                {
                    printf( " %d", path[z] + 1 );
                }
                fputc_unlocked('\n', stdout);
            }
            else
            {
                int pmask = tomask( path );
                for( int v = 0; v < n; v++ ) if( graph[u][v] >= 0 && !( pmask & ( 1 << v ) ) )
                {
                    int newd = dsofar + graph[u][v];
                    if( newd > maxd ) continue;
                    if( !bfs( pmask, v, t ) ) continue;
                    q.insert( make_pair( newd, make_pair( v, path + ( char )v ) ) );
                }
            }
        }
        
        if( !got1 ) PrintString("NIE\n", 4);
    }
    return 0;
}
