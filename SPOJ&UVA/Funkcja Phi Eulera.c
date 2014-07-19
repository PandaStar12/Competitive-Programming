#include <stdio.h>
 
long long phi(long long n) 
{
        long long p;
 
        if (n<=1) return n;
        if (n==2) return 1LL;
        for (p=2; p*p<=n; p++)
        {
                if (n%p==0)
                {
                        long long q=1, qq=p;
                        n /= p;
                        while (n%p==0)
                        {
                                q=qq; qq = qq*p;
                                n = n/p;
                        }
                        return (qq-q)*phi(n);
                }
        }
        return n-1;
}
 
int main()
{
        int t;
        scanf("%d", &t);
        
        while(t--)
        {
                long long n;
                scanf("%lld", &n);
                printf("%lld\n", phi(n));
        }
        
        return 0;
}
