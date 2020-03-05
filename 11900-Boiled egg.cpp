
#include<bits/stdc++.h>
using namespace std;

int main()
{
int test,n,p,q,b,i,j,arr[30],sum;
scanf("%d",&test);
for(j=1;j<=test;j++)
 {
 b=0;
 sum=0;
 scanf("%d%d%d",&n,&p,&q);
 for(i=0;i<n;i++)
  {
       scanf("%d",&arr[i]);
       }
 if(p>n)
  {
       p=n;
       }
 for(i=0;i<p;i++)
  {
       sum=sum+arr[i];
       }
 for(i=sum;i>q;i=i-arr[p-b])
  {
       b=b+1;
       }
 printf("Case %d: %d\n",j,p-b);
 }
return 0;
}
