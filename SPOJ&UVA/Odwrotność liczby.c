#include <stdio.h>
 
int t, a, b, u, w, x, z, q;
 
int main()
{
 
        scanf("%d", &t);
        
while(t--)	// Rozszerzony algorytm euklidesa LO TARNÓW
{
                scanf("%d %d", &b, &a);
                
                u = 1; w = a;
                x = 0; z = b;
 
                while(w)
                {
                        if(w < z)
                        {
                                q = u; u = x; x = q;
                                q = w; w = z; z = q;
                        }
 
                        q = w / z;
                        u -= q * x;
                        w -= q * z;
        }
 
        if(x < 0) x += b;
 
        printf("%d\n", x);      
 
}
 
  return 0;
} 

