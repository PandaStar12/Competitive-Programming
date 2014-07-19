#include <stdio.h>
#define MAX 1000000
 
int T[MAX+1], i, j, licznik=0, t, a, b, Wynik;
 
int main() 
{
        for (i=1; i <= MAX; i++) T[i]=1; // Inicjacja tablicy
 
        for (i=2; i*i <= MAX; i++)       // Sito Eratostenesa
        {
                if (T[i] != 0)
                {
                        j = i+i;
                        
                        while ( j<= MAX)
                        {
                                T[j] = 0;
                                j += i;
                        }
                }
        }       
        
        for( i = 1; i <= MAX; i++ )    
        {
                if( T[i] == 1 ) licznik++; 
                
                T[i] = licznik;
        } 
        
        scanf("%d", &t);
        
        while(t--)
        {
                scanf("%d %d", &a, &b);
                
                Wynik = T[b] - T[a];
                
                if( T[a] > T[a-1] ) Wynik++;    
                printf("%d\n", Wynik);
        }   
 
        return 0;
}
