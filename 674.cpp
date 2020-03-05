#include<bits/stdc++.h>
using namespace std;
#define mx 7499
long long int arr[]={1,5,10,25,50};
long long int dp[7][mx],total;
long long int fun(long long int ind, long long int sum)
{
  //  cout<<ind<<"  "<<sum<<endl;
    if(sum==0) return 1;

    if(sum<0)  return 0;

    if(ind==5)  return 0;

    if(dp[ind][sum]>=0)
        return dp[ind][sum];

   long long int res1=fun(ind,sum-arr[ind]);
   long long int res2=fun(ind+1,sum);
    total=res1+res2;
  //  cout<<res1<<" #"<<res2<<" @"<<total<<endl;
    dp[ind][sum]=total;
    return total;
}
int main()
{
  long long int num;
    memset(dp,-1,sizeof(dp));

   while(scanf("%lld",&num)!=EOF)
   {
      long long int res= fun(0,num);
       printf("%lld\n",res);
   }
   return 0;
}
