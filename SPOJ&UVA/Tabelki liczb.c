#include <stdio.h>
#include <stdlib.h>
 
int main()
{
        int t,i,iL,iK,l,k,liczba,tab[101][101];
        scanf("%d", &t);
        while(t--)
        {
                scanf("%d", &l);
                scanf("%d", &k);
                for(iL=0; iL<l; iL++)
                {
                        for(iK=0; iK<k; iK++)
                        {
                                scanf("%d", &liczba);
                                if(iL == 0)
                                {
                                        if(iK == 0) tab[1][0] = liczba;
                                        else tab[0][iK-1] = liczba;
                                }
                                else if(iK == 0)
                                {
                                        if(iL == l-1) tab[l-1][1] = liczba;
                                        else tab[iL+1][0] = liczba;
                                }
                                else if(iK == k-1 && iL<l-1)
                                {
                                        tab[iL-1][k-1] = liczba;
                                }
                                else if(iL == l-1)
                                {
                                        if(iK == k-1) tab[l-2][k-1] = liczba;
                                        else tab[l-1][iK+1] = liczba;
                                }
                                else tab[iL][iK] = liczba;
                        }
                }
                
                for(iL=0; iL<l; iL++)
                {
                for(iK=0; iK<k; iK++) { printf("%d ",tab[iL][iK]); }
                printf("\n");
                } 
        }
        
        return 0;
 
}
