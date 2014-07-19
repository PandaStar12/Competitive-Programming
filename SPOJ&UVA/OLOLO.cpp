#include <cstdio>
#include <algorithm>
#include <vector>
 
inline void PrintInteger(unsigned int n)
{
        if(n == 0) return;
        else
        {
                PrintInteger( n/10 );
                fputc_unlocked( (n%10)+48, stdout);
        }
}
 
inline void ReadInteger(unsigned int *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
} 
 
int los(int n) { return(int)(double)n*(rand()/(RAND_MAX+1.0)); } 
 
bool sorted = false;
 
int main()
{
        std::vector<unsigned int> co;
        unsigned int a, t;
        
        ReadInteger(&t);
        
        while( t-- )
        {  
                ReadInteger(&a);
                co.push_back(a);
        }
 
        while(true)
        {
                std::vector<unsigned int> m, w;
                unsigned int k,j;
                
                if ( co.size() > 250)
                {
                        k = los( co.size() );
                        j = co[k];
                }
                else
                {
                        if (sorted == false)
                        {
                                std::stable_sort( co.begin(), co.end() );
                                sorted = true;
                        }
                        
                        k = co.size() / 2;
                        j = co[k];        
                }
                
                for( unsigned int x = 0; x < co.size(); ++x ) 
                {
                        if (co[x]<j)
                        {
                                m.push_back(co[x]);    
                        }
                        else if (co[x]>j)
                        {
                                w.push_back(co[x]);    
                        }
                }
                
                if ( m.size() % 2 == 0  && w.size() % 2 == 0 )
                {
                        PrintInteger(j);
                        return 0;
                }
                else if ( m.size() % 2 == 1 )
                {
                        co = m;   
                }
                else
                {
                        co = w;   
                }
         }
         
        return 0;       
}

