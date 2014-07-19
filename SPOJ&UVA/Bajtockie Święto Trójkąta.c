#include <stdio.h>
#include <math.h>
 
int t;
 
int main() 
{
   long long int a,b,c, n;
   double k,w;
   
   scanf("%d", &t);
   
   while(t--)
   {
      scanf("%lld %lf", &n, &k);
      
      w=0;
      
      while(n--)
      {
         scanf("%lld %lld %lld", &a, &b, &c );
         
         if(a+b>=c && a+c>=b && b+c>=a) w += sqrt ( (a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c) ) / 40 * k;
      }
      
      printf("%.0lf\n", w);
   }
 
   return 0;
}



