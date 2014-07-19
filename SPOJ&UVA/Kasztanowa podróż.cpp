#include <cstdio>
#include <algorithm>
#include <vector>
 
inline void PrintINT(int a)
{
        if(a==0) return;
        else
        {
                PrintINT(a/10);
                fputc_unlocked( (a%10)+48, stdout);
        }
}
 
const unsigned int INF = 1000000000;
typedef std::vector<unsigned int> VI;
 
inline void readUINT(unsigned int *n)
{
        register char c = 0;
        while (c < 33) c = getc_unlocked(stdin);
        (*n) = 0;
        while (c>32) { (*n) = (*n) * 10 + (c - 48); c = getc_unlocked(stdin); }
}
 
 
/* Klasa odpowiadaj�ca za reprezentacj� mostu */
 
class Most
{
        public:
 
        unsigned int l, k;      // Wierzcho�ki mostu
 
        Most( unsigned int a, unsigned int b )  // Konstruktor
        {
                if( a > b )     // "Je�eli l > k to zamieni� je miejscami"
                {
                        this->l = a;
                        this->k = b;
                }
                else
                {       
                        this->l = b;
                        this->k = a;
                }
        }
 
        void Wypisz(void)       // Stylowe Wypisywanie :)
        {
                PrintINT(this->k);
                fputc_unlocked(' ', stdout);
                PrintINT(this->l);    
                fputc_unlocked('\n',stdout);
        }
        
};
 
bool Sortowanie_Wierzcholkow( Most A, Most B )  // Taki prze�adowany operator
{
            if( A.k > B.k ) return false;
            else
            {
                    if( A.k == B.k && A.l > B.l ) return false;
                    else return true;
            }                           
}
 
/** Znajdowanie Most�w **/
 
unsigned int N, M, CNT; // Zmienne globalne
VI IN, PI;
std::vector<VI> ADJ;    
std::vector<Most> Wynik;
 
void Wczytaj(void) 
{
        unsigned int i, A, B;
        
        readUINT(&N);
        readUINT(&M);
        
        ADJ.clear(); 
        ADJ.resize(N);
        
        for ( i = 0; i < M; i++)
        {
                readUINT(&A);
                readUINT(&B);
                
                if( A != B )
                {
                        A--;
                        B--;
                        
                        ADJ[A].push_back(B);
                        ADJ[B].push_back(A);
                }
        }
}
 
void Init()
{
        IN.clear();
        IN.resize(N,INF);
        PI.resize(N);
        CNT = 1;
}
 
unsigned int Dfs(unsigned int U)
{
        unsigned int ANS = U;
        IN[U] = CNT++;
        
        for (unsigned int i = 0; i < ADJ[U].size(); i++)
        {
                unsigned int V = ADJ[U][i];
                
                if( V == U || V == PI[U] ) continue;
 
                if( IN[V] == INF )
                {
                        PI[V] = U;
                        V = Dfs(V);    
                }
                
                if( IN[ANS] > IN[V]) ANS = V;
        }
        
        if ( ANS == U && PI[U] != U ) 
        {
                Most Mo = Most( PI[U]+1, U+1 );
                Wynik.push_back(Mo);
        }
        
        return ANS;
}
 
/* G�owna cz�� programu */ 
 
int main()
{
        Wczytaj(); 
        Init();
        
        for ( unsigned int U = 0; U < N; U++)
        {
                if( IN[U] == INF )
                {
                        PI[U] = U;
                        Dfs(U);
                }
        }
        
        std::sort(Wynik.begin(), Wynik.end(), Sortowanie_Wierzcholkow);
        
        for( unsigned int i = 0; i < Wynik.size(); i++ )
        {
                Wynik[i].Wypisz();
        }
 
        return 0;
}
