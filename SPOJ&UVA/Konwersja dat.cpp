    #include<iostream>
    #include<string>
    #include<math.h>
    using namespace std;

    int main()
    {
       string bin;
       cin >>bin;
    if(bin[0]=='0' || bin[0]=='1'&&bin[1]=='0' || bin[0]=='1'&&bin[1]=='1')
    {
       int rok=0, mie=0, dzi=0;
       rok=((int)bin[0]-48)*64 + ((int)bin[1]-48)*32 + ((int)bin[2]-48)*16 + ((int)bin[3]-48)*8 + ((int)bin[4]-48)*4 + ((int)bin[5]-48)*2 + ((int)bin[6]-48);
       if(rok!=0 && bin.size()==16)
       {
          rok+=1980;
       }
       else
       {
          cout <<"ERROR" <<endl;
          goto freedom;
       }
       mie=((int)bin[7]-48)*8+((int)bin[8]-48)*4+((int)bin[9]-48)*2+((int)bin[10]-48);
       dzi=((int)bin[11]-48)*16+((int)bin[12]-48)*8+((int)bin[13]-48)*4+((int)bin[14]-48)*2+((int)bin[15]-48);
       if(mie!=0 && dzi !=0 && mie<13 && dzi <32)
       {
       if(mie<10 && dzi>=10)
       {
       cout <<rok <<"-0"<<mie<<"-"<<dzi<<endl;
       }
       else if(mie>=10 && dzi<10)
       {
       cout <<rok <<"-"<<mie<<"-0"<<dzi<<endl;
       }
       else
       cout <<rok <<"-"<<mie<<"-"<<dzi<<endl;
       }
       else
       {
       cout <<"ERROR" <<endl;
       goto freedom;
       }
    }
    else
    {
       int rok=0, mie=0, dzi=0;
       rok=((int)bin[0]-48)*1000+((int)bin[1]-48)*100+((int)bin[2]-48)*10+((int)bin[3]-48);
       mie=((int)bin[5]-48)*10+((int)bin[6]-48);
       dzi=((int)bin[8]-48)*10+((int)bin[9]-48);
       if(rok>=1980&&rok<=2107&&mie>0&&mie<13&&dzi>0&&dzi<32&&bin[4]=='-'&&bin[7]=='-' &&bin.size()==10)
       {
          int tab[7], i=0;
          for(i=0;i<7;i++)
          {
             tab[i]=0;
          }
          i=0;
          rok-=1980;
          while(rok>0)
          {
           tab[i]=rok%2;
           i++;
           rok=rok/2;
           }
           for(i=6;i>=0;i--)
           {
              cout <<tab[i];
           }
           
           int ta[4], j;
           for(j=0;j<4;j++)
           {
              ta[j]=0;
           }
           j=0;
           while(mie>0)
           {
              ta[j]=mie%2;
              j++;
              mie=mie/2;
           }
           for(j=3;j>=0;j--)
           {
              cout <<ta[j];
           }
           
           int t[5], k;
           for(k=0;k<4;k++)
           {
              ta[k]=0;
           }
           k=0;
           while(dzi>0)
           {
              ta[k]=dzi%2;
              k++;
              dzi=dzi/2;
           }
           for(k=4;k>=0;k--)
           {
              cout <<ta[k];
           }
          cout <<endl;
       }
       else
       {
          cout <<"ERROR" <<endl;
          goto freedom;
       }
    }
       
       freedom:;
    }
