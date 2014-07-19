#include <stdio.h>
 
int main()
{
    int t, n;
    scanf("%d", &t);
    
    while(t--)
    {
              unsigned int K[4] = {0,0,0,0}; // N0, S1, W2, E3
              
              scanf("%d", &n);
              
              while(n--)
              {
                        int a, b;
                        scanf("%d %d", &a, &b);
                        K[a] += b; 
              }
              
              if( K[0] >= K[1] ) { K[1] = K[0]-K[1]; K[0] = 0; }
              else { K[1] = K[1] - K[0]; K[0] = 1; }
              
              if( K[2] >= K[3] ) { K[3] = K[2]-K[3]; K[2] = 2; }
              else { K[3] = K[3] - K[2]; K[2] = 3; }
              
              if( (K[1] == 0) && (K[3] == 0) ) printf("studnia\n");
              else
              {
                  if(K[1] != 0) printf("%u %u\n",K[0],K[1]);
                  if(K[3] != 0) printf("%u %u\n",K[2],K[3]);
              }         
    }
    
    return 0;
}
