#include <stdio.h>
 
long long Nwd( long long a,  long long b)
{
    while (b!=0)
    {
        long long c = a%b;
        a=b;
        b=c;
    }
    
    return a;
}

 
void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}  
 
int main()
{
    int t;
    
    readINT(&t);
    
    while(t--)
    {
        long double NWW = 1;
        long double a1,a2,b1,b2,c1,c2;
 
        scanf("%llf/%llf%llf/%llf%llf/%llf", &a1, &a2, &b1, &b2, &c1, &c2 );
        
        if( a1 == 0 || b1 == 0 || c1 == 0 ) printf("NIE\n");
        else
        {
        
                NWW = NWW / Nwd((long long)NWW, (long long)a2) * a2;
                NWW = NWW / Nwd((long long)NWW,(long long)b2) * b2;
                NWW = NWW / Nwd((long long)NWW,(long long)c2) * c2;
                
                a1 *= NWW/a2;
                b1 *= NWW/b2;
                c1 *= NWW/c2;
                
                if( (a1+b1 > c1) && (a1+c1 > b1) && (b1+c1 > a1) ) fwrite_unlocked("TAK\n",4,1,stdout);
                else fwrite_unlocked("NIE\n",4,1,stdout);
        
        }
        
    }
    
    return 0;
}
