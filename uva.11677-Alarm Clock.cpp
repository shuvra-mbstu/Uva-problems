#include<bits/stdc++.h>
using namespace std;
int main()
{
   int res1,hr1,hr2,min1,min2,res2,res;
   while(scanf("%d%d%d%d",&hr1,&min1,&hr2,&min2)!=EOF)
   {
       if(hr1==0&&min1==0&&hr2==0&&min2==0)
       {
           break;
       }
       res1=((hr1*60)+min1);
       res2=((hr2*60)+min2);
       if(res2<res1)
       {
           res2=1440+res2;
       }
       res=res2-res1;
       printf("%d\n",res);
   }
   return 0;
}
