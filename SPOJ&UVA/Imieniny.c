#include <stdio.h>
 
int main()
{
        long int D, L, C;
        
        scanf("%d", &D);
       
        while(D--)
        {
            scanf("%d %d", &L, &C);
           
            if (C == 0) printf("NIE\n");
            else
            {
                  if (L == 1)printf("TAK\n");
                  else
                  {
                        if (C%(L-1) == 0)
                        {
                           printf("NIE\n");
                        }
                        else
                        {
                           printf("TAK\n");
                        }
                  }
            }
        }
        
        return 0;
}
