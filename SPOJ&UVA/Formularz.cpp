#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;
 
int main() {
        string N_imie,imie,N_nazwisko,nazwisko,data,ur,urodziny;
        bool imie_blad=false,nazwisko_blad=false,urodziny_blad=false;
 
 
        while(cin>>N_imie)
        {
                cin>>imie>>N_nazwisko>>nazwisko>>data>>ur>>urodziny;
        //////////////////////////////////////////////////////////////////////////      
                for(int i=0;i<imie.size()-1;i++)
                {
                        if(!isdigit(imie[i]))
                        {
                        
                                if(i==0) 
                                {
                                        if(isupper(imie[0])) continue;
                                        else { imie_blad = true; break;}
                                }
                                else 
                                {
                                        if(islower(imie[i])) continue;
                                        else { imie_blad = true; break;}
                                }
                        }
                        else { imie_blad = true; break;}
                }
        ////////////////////////////////////////////////////////////////////////////////
                for(int i=0;i<nazwisko.size()-1;i++)
                {
                        if(!isdigit(nazwisko[i]))
                        {
                        
                                if(i==0) 
                                {
                                        if(isupper(nazwisko[0])) continue;
                                        else { nazwisko_blad = true; break;}
                                }
                                else 
                                {
                                        if(islower(nazwisko[i])) continue;
                                        else { nazwisko_blad = true; break;}
                                }
                        }
                        else { nazwisko_blad = true; break;}
                }
        ///////////////////////////////////////////////////////////////////////////////
                stringstream xx;
                string d,m,r;
                
                r += urodziny[0];
                r += urodziny[1];
                r += urodziny[2];
                r += urodziny[3];
                
                m += urodziny[5];
                m += urodziny[6];
                
                d += urodziny[8];
                d += urodziny[9];
        
                int rrr,mmm,ddd;
                xx<<r;
                xx>>rrr;
                xx.clear();
                
                xx<<m;
                xx>>mmm;
                xx.clear();
                
                xx<<d;
                xx>>ddd;
                xx.clear();
                
        if(!(rrr>=1900 && rrr<=2000 && mmm>=1 && mmm<=12 && ddd>=1 && ddd<=31 && urodziny[4]=='-' && urodziny[7]=='-')) urodziny_blad=true;
        ///////////////////////////////////////////////////////////////////////////////
        
        
        if(imie_blad==true) cout<<"0"<<endl;
        else if(imie_blad==false && nazwisko_blad==true) cout<<"1"<<endl;
        else if(imie_blad==false && nazwisko_blad==false && urodziny_blad==true) cout<<"2"<<endl;
        else cout<<"3"<<endl;
        //////////////////////////////////////////////////////////////////////////////////////////////
        imie_blad=false;
        nazwisko_blad=false;
        urodziny_blad=false;
        }
        
        return 0;
}

