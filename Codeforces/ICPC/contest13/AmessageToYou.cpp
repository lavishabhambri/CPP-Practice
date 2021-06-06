#include <bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("scoreboard.in","r",stdin);
    int T;
    cin>>T;


    while(T--)
    {   
        
        int solved[13]={0};
        int teams[13]={0};

        int max=-1,index;
        int k; char ch;int n;
      cin>>k;
      while(getchar() != '\n' );

      for(int i=0;i<k;i++)
      {
         cin>>ch;
         solved[ch-'A']=1;
      }
      for(int i=0;i<13;i++)
      {
          cin>>n;
          teams[i]=n;
      }

      for(int i=0;i<13;i++)
      {
          if(solved[i]!=1)
          {
             if(teams[i]>max)
             {
                 max=teams[i];
                 index=i;
             }
          }
      }
      char x = index+'A';
      cout<<x<<endl;
      
    }
    fclose(stdin);
    return 0;
}
