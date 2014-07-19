#include<cstdio>
#include<set>
 
using namespace std;
 
inline void PRINTLLD(long long n)
{
        if(n == 0) return;
        else
        {
                PRINTLLD( n/10 );
                fputc_unlocked( (n%10)+48, stdout);
        }
}
 
inline void PRINTLD(long n)
{
        if(n == 0) return;
        else
        {
                PRINTLD( n/10 );
                fputc_unlocked( (n%10)+48, stdout);
        }
}
 
inline void readLONG(long *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
}
 
inline void readINT(int *n)
{
    register char c = 0;
    while (c < 33) c=fgetc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10 + (c-'0'); c=fgetc_unlocked(stdin);}
}
 
struct obj
{
        long num,id;
        
        bool operator< (const obj &o) const
        {
                return num<o.num;
        }
};
 
int main()
{ 
  
        int t,n;
        obj a,b,tmp;
        
        readINT(&t);
        
        while(t--)
        {
                readINT(&n);
                
                obj zbior[n];
                long wyniki[n][2];
                
                for(int i=0; i<n; i++) readLONG(&zbior[i].num),zbior[i].id=i+1;
                     
                std::multiset<obj> karty (zbior,zbior+n);
                std::multiset<obj>::iterator it;
                   
                long index=0;
                long long wynik=0;
                
                while(karty.size()!=1)
                {
                        it=karty.begin();
                        a=(*it);
                        karty.erase(it);
                        it=karty.begin();
                        b=(*it);
                        karty.erase(it);
                            
                        if(a.id<b.id)
                        {
                                wyniki[index][0]=a.id;
                                wyniki[index][1]=b.id;
                                tmp.id=a.id;
                        }
                        else
                        {
                                wyniki[index][0]=b.id;
                                wyniki[index][1]=a.id;
                                tmp.id=b.id;
                        }
                               
                        tmp.num=a.num+b.num;
                        wynik+=tmp.num;
                        karty.insert(tmp);
                        index++;
                }
                   
                PRINTLLD(wynik);
                fputc_unlocked(10, stdout);
                
                for(int i=0; i<index; i++)
                {
                        PRINTLD(wyniki[i][0]);
                        fputc_unlocked(' ', stdout);
                        PRINTLD(wyniki[i][1]);
                        fputc_unlocked(10, stdout);
                }
        }
   
        return 0;
}
