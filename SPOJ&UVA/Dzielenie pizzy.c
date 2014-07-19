#include <stdio.h>
#define PI 3.1415926536
 
inline void PrintInteger(int a)
{
        if(a==0) return;
        else
        {
                PrintInteger(a/10);
                fputc_unlocked( (a%10)+48, stdout);
        }
}
 
inline void ReadInteger(unsigned int *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
} 
 
int main(void) 
{
        int t;
        
        ReadInteger(&t);
 
        while(t--)
        {
                unsigned int a, b, c;
 
                ReadInteger(&a);
                ReadInteger(&b);
 
                double OBW = PI * a;
 
                c = b;
 
                if( b % 2 == 0 ) c /= 2;
 
                printf("%.3lf", OBW/c*0.5);
                fputc_unlocked(' ', stdout);
                PrintInteger(c);
                fputc_unlocked('\n',stdout);
                
        }
 
        return 0;
}
