#include <stdio.h>
#include <string.h>
#define MAX 60000
#define LL int
 
void readLL(LL *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10LL + (c-'0'); c=getc_unlocked(stdin);}
}
 
char A[MAX+1], B[MAX+1];
 
int equiv_cyc( char u[], char v[], int n)
{
  int i = -1, j = -1, k;
 
  while( i<n-1 && j<n-1 )
  {
    k = 1;
    while(k<=n && u[(i+k)%n]==v[(j+k)%n]) k++;
    if (k>n) return 1;
    if (u[(i+k)%n] > v[(j+k)%n]) i += k; else j += k;
  }
  return 0;
}
 
int main()
{
        int t;
        readLL(&t);
 
        while(t--)
        {
                int i = -1;
                
                do
                {
                        i++;
                        A[i] = fgetc_unlocked(stdin);
                }
                while( A[i] != '\n' && A[i] != EOF );
                
                i = -1;
                
                do
                {
                        i++;
                        B[i] = fgetc_unlocked(stdin);
                }
                while( B[i] != '\n' && B[i] != EOF );
 
                if( equiv_cyc(A,B,i) == 1)
                {
                        puts("TAK");
                }
                else
                {
                        puts("NIE");
                }
        }
 
        return 0;
}
