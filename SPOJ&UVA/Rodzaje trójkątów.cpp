#include <cstdio>
 
void bubbleSort(int numbers[], int array_size)
{
  int i, j, temp;
 
  for (i = (array_size - 1); i > 0; i--)
  {
    for (j = 1; j <= i; j++)
    {
      if (numbers[j-1] > numbers[j])
      {
        temp = numbers[j-1];
        numbers[j-1] = numbers[j];
        numbers[j] = temp;
      }
    }
  }
}
 
int main() 
{
        int tab[3];  // Zmienne
 
        while( scanf( "%d %d %d",&tab[0],&tab[1],&tab[2] ) != EOF )
        {
                bubbleSort(tab, 3);
        
                if( (tab[0]+tab[1]>tab[2]) && (tab[0]+tab[2]>tab[1]) && (tab[1]+tab[2]>tab[0]) )
                {
                        if((tab[0]*tab[0])+(tab[1]*tab[1])==(tab[2]*tab[2])) printf("prostokatny\n");
                        if((tab[0]*tab[0])+(tab[1]*tab[1])>(tab[2]*tab[2]))  printf("ostrokatny\n");
                        if((tab[0]*tab[0])+(tab[1]*tab[1])<(tab[2]*tab[2]))  printf("rozwartokatny\n");         
                }
                else printf("brak\n");
        }
         
        return 0;
}

