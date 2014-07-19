#include <stdio.h>
#include <math.h>
 
void readINT( unsigned int *n )
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=getc_unlocked(stdin);}
}
 
void Tak(void)
{
        fputc_unlocked( 'T', stdout);
        fputc_unlocked( 'A', stdout);
        fputc_unlocked( 'K', stdout);
        fputc_unlocked('\n', stdout);
}
 
void Nie(void)
{
        fputc_unlocked( 'N', stdout);
        fputc_unlocked( 'I', stdout);
        fputc_unlocked( 'E', stdout);
        fputc_unlocked('\n', stdout);
}
 
int main()
{
        unsigned int N, A, B, C, D;
        double X, Y, K, L, DMax;
        
        readINT(&N);
 
        while(N--)
        {
                readINT(&A);
                readINT(&B);
                readINT(&C);
                readINT(&D);
                
                if(A < B ) A = A^B, B = A^B, A = A^B;
                if (C < D) C = C^D, D = C^D, C = C^D;
 
                if (A > C && B > D) Tak();
                else if ( D >= B )  Nie();
                else
                {
                        X = sqrt((double)A * (double)A + (double)B * (double)B);
                        Y = sqrt((double)C * (double)C + (double)D * (double)D);
                        
                        if (Y < B) Tak();
                        else if( Y > X ) Nie();
                        else
                        {
                                L = (B - sqrt(Y * Y - (double)A * (double)A)) / 2;
                                K = (A - sqrt(Y * Y - (double)B * (double)B)) / 2;
                                DMax = sqrt(L * L + K * K);
                                
                                if( D >= DMax ) Nie();
                                else Tak();
                        }
                }
        }
        
        return 0;
}
