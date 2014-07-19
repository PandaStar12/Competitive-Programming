#include <stdio.h>
#define PI 3.141592654 
 
int main() 
{
        double r,d;     
        scanf("%lf %lf", &r, &d);
        printf("%.2lf", PI*((r*r)-((d*d)/4)));
        return 0;
}
