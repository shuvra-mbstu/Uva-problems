#include<bits/stdc++.h>
using namespace std;
int main()
{
     int test,num,diff,res,arr[100007],ans;
     scanf("%d",&test);
     while(test--)
     {
          scanf("%d",&num);
          res=-1000000;
          ans=-1000000;
          for(int i=0;i<num;i++)
          {
               scanf("%d",&arr[i]);
             diff=res-arr[i];
             if(ans<diff)
             {
                  ans=diff;
             }
               if(res<arr[i])
               {
                    res=arr[i];
               }
          }
          printf("%d\n",ans);
     }
}
