#include<bits/stdc++.h>
using namespace std;
int main()
{
  int numb,prices[10007],money,i,j,res1,l,res2,m,a,b;
  char c;
  while(scanf("%d",&numb)!=EOF)
  {
      for(i=0;i<numb;i++)
      {
          scanf("%d",&prices[i]);
      }
      sort(prices,prices+numb);
      scanf("%d",&money);
      for(i=0;i<numb-1;i++)
      {
          for(j=i+1;j<numb;j++)
          {
              if(((prices[i]+prices[j])==money)&&(prices[i]!=0)&&(prices[j]!=0))
              {
                res1=prices[i];
                 res2=prices[j];
                 break;
                    }
              }
          }
     printf("Peter should buy books whose prices are %d and %d.\n\n",res1,res2);
  }
}
