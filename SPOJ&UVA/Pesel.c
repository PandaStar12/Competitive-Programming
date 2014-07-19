#include <stdio.h>
 
int Cyfra( char znak ) 
{
    return (int)znak-48;
}
 
char Pesel( char Tab[] )
{
        
        int Wynik = Cyfra( Tab[0] ) + Cyfra( Tab[4] ) + Cyfra( Tab[10] ) + Cyfra( Tab[8] );
        Wynik += Cyfra( Tab[1] ) * 3 + Cyfra( Tab[5] ) * 3 + Cyfra( Tab[9] ) * 3;
        Wynik += Cyfra( Tab[3] ) * 9 + Cyfra( Tab[7] ) * 9;
        Wynik += Cyfra( Tab[6] ) * 7 + Cyfra( Tab[2] ) * 7;
 
        if( (Wynik != 0) && (Wynik % 10 == 0) ) return 'D';
        else return 'N';
} 
 
int main() 
{
        int t;
        
        scanf("%d", &t); 
        
        while(t--)
        {
                char Tab[12];
                scanf("%s", Tab);
                printf("%c\n", Pesel(Tab));
        }
        return 0;
}
