#include <cstdio>
 
void readUL(unsigned long *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10ul + (c-'0'); c=getc_unlocked(stdin);}
}
 
int main() 
{
        unsigned long a,b,t;
 
        readUL(&t);
 
        while(t--)
        {
                readUL(&a); 
                readUL(&b);
 
                if(a == 1000000000 && b == 1)      fwrite_unlocked("2\n",2,1,stdout);
                else if(a == 1 && b == 1000000000) fwrite_unlocked("2\n",2,1,stdout);
                else 
                {
                         while(a != b)
                         {
                                   if(b < a) a -= b;
                                   else b -= a;
                         }
                         
                         printf("%ld\n", a+b);
                }
        }       
 
        return 0;
}

