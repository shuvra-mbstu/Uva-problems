#include<bits/stdc++.h>
using namespace std;
int main()
{
     int val1,val2,test;
     scanf("%d",&test);
     while(test--)
     {
          scanf("%d%d",&val1,&val2);
          if((val1-1)%(val2-1)==0)
          {
               int a=((val1-1)/(val2-1));
               printf("%d\n",a);
          }
          else
               printf("cannot do this\n");
     }
}
