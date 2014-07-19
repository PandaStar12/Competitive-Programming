#include <cstdio>
#include <algorithm>
#include <vector>
 
void readINT( int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main() 
{
        int t,n;
        
        readINT(&t);
 
        while(t--)
        {
                readINT(&n);
                
                int MAX=0, POM;
                
                std::vector<int> Wektor;
                
                while(n--)
                {
                        scanf("%d", &POM);
                        
                        if( POM > MAX ) MAX = POM;
                        
                        Wektor.push_back(POM);
                }
                
                std::sort( Wektor.begin(), Wektor.end() );
                
                for( int i = Wektor.size()-1; i >= 0; i-- )
                {
                        if( Wektor[i] == MAX ) printf("%d ", Wektor[i] );
                        else break;
                }
                
                for( int i = 0; Wektor[i] != MAX; i++ ) printf("%d ", Wektor[i]);
                
                fputc_unlocked('\n', stdout);
        }
 
        return 0;
}









