#include <stdio.h>
 
// Algorytm by mgr Jerzy Wałaszek I LO w Tarnowie
 
unsigned WyrazyGraya[65536];
 
unsigned Pot2(unsigned n)
{
  unsigned p;
 
  p = 1;
  while(n-- > 0) p += p;
  return(p);
}
 
 
void Gray(unsigned n)
{
  unsigned i, p;
 
  p = Pot2(n);
  for(i = 0; i < p; i++) WyrazyGraya[i] = i ^ (i >> 1);
}
 
void Pisz(unsigned n)
{
  unsigned i, kg, p, m;
 
  p = Pot2(n);
  for(i = 0; i < p; i++)
  {
    kg = WyrazyGraya[i];
    for(m = p >> 1; m > 0; m >>= 1) printf( ((kg & m) ? "1" : "0") );
    printf("\n");
  };
}
 
int main()
{
 
        unsigned int n, t;
        
        scanf("%u", &t);
 
        while(t--)
        {
                scanf("%u", &n);
                Gray(n); 
                Pisz(n);
                printf("\n");
        }
 
        return 0;
}

