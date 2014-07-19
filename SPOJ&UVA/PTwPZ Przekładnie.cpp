#include <stdio.h>
 
inline void readINT( unsigned int *n) 
{
register char c = 0;
while (c < 33) c=fgetc_unlocked(stdin);
(*n) = 0;
while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
}
 
unsigned long long NWD (unsigned long long a, unsigned long long b)
{
    unsigned long long c;
 
    while (b != 0)
    {
          c = a % b;
          a = b;
          b = c;
 
    }
 
    return a;
}
 
int main(void) 
{
        unsigned int t, d, a, b;
 
        readINT(&t);
 
        while(t--)
        {
                unsigned long long int l = 1, m = 1, nwd;
 
                readINT(&d);
 
                while(d--)
                {
                        readINT(&a);
                        readINT(&b);
 
                        l *= a;
                        m *= b;
                }
                
                nwd = NWD(l, m);
                
                l /= nwd;
                m /= nwd;
                
                printf("%llu %llu\n", l, m);
        }
 
        return 0;
}
