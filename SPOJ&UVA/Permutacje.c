#include <stdio.h>
 
void out(char T[], int N)
{
   int i;
   for( i = 0; i < N; i++) printf("%c", T[i]);
   printf("\n");
}
 
void permutacje (char T[], int ix, int n)
{
  if( ix < n-1 )
  {
    int i;
    for( i = ix; i < n; i++)
    {
      int pom = T[ix];
      T[ix] = T[i];
      T[i] = pom;
      permutacje(T, ix+1, n);   
    }
 
    char c = T[ix];
    for( i = ix; i < n-1; i++) T[i] = T[i+1];
    T[n-1] = c; 
  }
  else out(T, n);
}
 
 
int main()
{
  int N,t;
  scanf("%d", &t);
  
  while(t--)
  {
    scanf("%d", &N);
    char T[N+1];
   
    int i;
    
    for( i=0; i<N; i++)
    {
      T[i]=97+i;
    }
    
    permutacje(T, 0, N);
    
  }
 
  return 0;
}
