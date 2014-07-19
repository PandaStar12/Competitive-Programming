#include <stdio.h>
#define MAX 100000
 
char Liczba1[MAX+1];
 
inline void readINT(int *n)     // Szybkie wczytywanie INTów by Rafał Nowak
{
        register char c = 0;
        while (c < 33) c=getc_unlocked(stdin);
        (*n) = 0;
        while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
inline unsigned int readStr( char *WSK )
{
        register char c;
        
        unsigned int i = 0;
        
        while(1)
        {
                c = fgetc_unlocked(stdin);
                if( c < 33 ) break;
                WSK[i] = c;
                i++;
        }
        
        return i;
}
 
int main()
{
        int t, l, i, Liczba2;
        readINT(&t);
 
        while(t--) 
        {
                readINT(&Liczba2);    
                l = readStr(Liczba1); 
                long long Wynik = 0; 
                
                for ( i = 0; i < l; i++)
                {
                        Wynik = Wynik * 10 + Liczba1[i] - '0';
                        Wynik = Wynik % Liczba2;
                }
                    
                if( Wynik == 0 )
                {
                        fputc_unlocked('T', stdout);
                        fputc_unlocked('A', stdout);
                        fputc_unlocked('K', stdout);
                }
                else 
                {
                        fputc_unlocked('N', stdout);
                        fputc_unlocked('I', stdout);
                        fputc_unlocked('E', stdout);
                }   
                
                fputc_unlocked('\n', stdout);
        }
        
        return 0;
}
