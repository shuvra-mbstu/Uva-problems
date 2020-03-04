#include<bits/stdc++.h>
using namespace std;
int main()
{
  int numb,prices[10007],money,i,j,k[10007]={1000002},res1,l,res2;
  char c;
  while(scanf("%d",&numb)!=EOF)
  {
      for(i=0;i<numb;i++)
      {
          k[i]=0;
          scanf("%d",&prices[i]);
      }
      sort(prices,prices+numb);
      scanf("%d",&money);
      for(i=0;i<numb-1;i++)
      {
          for(j=i+1;j<numb;j++)
          {
              if((prices[i]+prices[j])==money)
              {
                  if(prices[j]>prices[i])
                  {
                      k[i]=prices[j]-prices[i];
                                        printf("%d\t",k[i]);

                  }
                  else
                  {
                    k[i]=prices[i]-prices[j];
                                      printf("%d\t",k[i]);

                  }
                  break;
              }
          }
          if(k[i]<=k[i-1])
          {
              res1=prices[i];
              res2=prices[j];
          }
          if(res1>res2)
          {
              l=res1;
              res1=res2;
              res2=l;
          }
          printf("%d\t%d\n",res1,res2);
      }
     printf("Peter should buy books whose prices are %d and %d.\n",res1,res2);
  }
}
