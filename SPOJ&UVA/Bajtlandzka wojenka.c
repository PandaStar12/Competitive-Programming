    #include <iostream>
 
    using namespace std;
 
    bool czy_jest(int *tab, int n);
 
    int main ()
    { 
      int bajtolomeusz[100];
      int gracz[100];
      int k,temp;
      int ile=0;       
     
      cin>>bajtolomeusz[0];
      for(int i=1; i<26; i++)
      {
        cin>>bajtolomeusz[i]; 
        temp=bajtolomeusz[i];
        k=i-1;
        while(k>=0 && bajtolomeusz[k]<temp)
        {
          bajtolomeusz[k+1]=bajtolomeusz[k]; 
          k--;
        }     
        bajtolomeusz[k+1]=temp;
      }
     
      k=0;
      for(int i=52; i>=0; i--)
      {
        if(czy_jest(bajtolomeusz, i)==false)
        {
          gracz[k]=i;
          k++;
        }   
      }   
     
      k=0;
      for(int i=0; i<26; i++)
      {
        for(int j=k; j<26; j++)
        {
          if(bajtolomeusz[i]>gracz[j])
          {
            ile++;
            k=j+1;
            break;
          }   
        }   
      }   
     
      cout<<ile;  
      return 0;
    }
 
    bool czy_jest(int *tab, int n)
    {
      for(int i=0; i<26; i++)
      {
        if(tab[i]==n)
        {
          return true;
        }   
      }   
      return false;
    }

