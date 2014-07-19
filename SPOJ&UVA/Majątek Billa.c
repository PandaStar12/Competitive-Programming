#include<stdio.h>
inline void PrintINT(int a)
{
        if(a==0) return;
        else 
        { 
PrintINT(a/10); 
fputc_unlocked( (a%10)+48, stdout);
        }
}
 
inline void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c = fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c = fgetc_unlocked(stdin);}
}
 
int a,b,n, t;
int x,res=1;
 
int main()
{        
        while(1)
        {
readINT(&x);
readINT(&b);
readINT(&n);
 
if(n == 0) break;
 
do
{
                                                                                                                        x%=n;
                                                                                                                        if (b&1) 
                                                                                                                        {
                                                                                                                        res*=x;
                                                                                                                        res%=n;
                                                                                                                        }
                                                                                                                        x*=x;
} while (b>>=1); 

if( res != 0 ) PrintINT(res);
else putc_unlocked('0', stdout);
putc_unlocked('\n',stdout);
res = 1;
        }
 
        return 0;
}

