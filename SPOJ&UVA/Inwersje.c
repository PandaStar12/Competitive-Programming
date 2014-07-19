#include <stdio.h> 
#define MAX_N 10000
#define LL unsigned long long
 
inline void PrintINT(int a)
{
        if(a==0) return;
        else
        {
                PrintINT(a/10);
                fputc_unlocked( (a%10)+48, stdout);
        }
}
 
inline void readLL(LL *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10LL + (c-'0'); c=getc_unlocked(stdin);}
}
inline void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
LL a[MAX_N], b[MAX_N];
/* b to tablica pomocnicza dla procedury merge */
 
LL merge(LL *a, LL *b, int p, int q, int r)	// Kod na inwersje z main.edu.pl
{
        int it;                                                         
        int i = p;
        int j = q + 1;
        int s = p;
        LL wyn = 0, ile_druga = 0;
        while (i <= q && j <= r)
        {
                if (a[i] <= a[j]) /* Wazne, zeby tu bylo dobre porownanie */
                {
                        b[s] = a[i];
                        i++;
                        wyn += ile_druga; /* Ile juz wrzucilismy z drugiej polowki? */
                }
        else
        {
                b[s] = a[j];
                j++;
                ile_druga++;
        }
        s++;
}
/* Skonczyl sie ktorys z ciagow: a[p..q] lub a[q+1..r]. Nalezy ogon *
     * drugiego ciagu przepisac do tablicy b na pozycje s+1..r.           */
while (i <= q)
{
        b[s] = a[i];
        i++;
        s++;
        wyn += ile_druga; /* Ile juz wrzucilismy z drugiej polowki? */
}
while (j <= r)
{
        b[s] = a[j];
        j++;
        s++;
}
                                    
for ( it = p; it <= r; it++)
        a[it] = b[it];
return wyn;
}
 
LL mergesort(LL *a, LL *b, int p, int r)
{
        LL wyn = 0LL;
        if (p == r)
                return wyn;
        int q = (p + r) / 2;
        /* Sumujemy liczby inwersji z obu polowek */
        wyn += mergesort(a, b, p, q);
        wyn += mergesort(a, b, q + 1, r);
        /* I liczbe inwersji miedzypolowkowych */
        wyn += merge(a, b, p, q, r);
        return wyn;
}
 
int main()
{
        int n, t, i;
        
        readINT(&t);
        
        while(t--)
        {
                readINT(&n);
 
                for ( i = 0; i < n; i++) readLL(&a[i]);
 
                int abc = mergesort(a, b, 0, n - 1);
                if( abc == 0 ) fputc_unlocked('0', stdout);
                else PrintINT(abc);
                fputc_unlocked('\n', stdout);
        } 
        
        return 0;
}


