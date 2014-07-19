#include<stdio.h>
 
int a,b,n, t;
long long int x,res=1;
 
int main()
{
        scanf("%d", &t);
        
        while(t--)
        {
                scanf("%d %d %d", &a, &b, &n);
                x=(long long int)a;
                
                do
                {
                        x%=(long long int) n;
                        if (b&1) 
                        {
                        res*=x;
                        res%=(long long int)n;
                        }
                        x*=x;
                } while (b>>=1); 
                
                printf("%d\n", (int)res);
                res = 1;
        }
 
	return 0;
}
