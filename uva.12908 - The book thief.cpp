#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int arr[15000],num,i,j,k,res,page;
    i=1;
    arr[0]=0;
    arr[1]=1;
    while(arr[i]<=100000000)
    {
        i++;
        arr[i]=arr[i-1]+i;
    }
    while(scanf("%lld",&num)!=EOF)
    {
        if(num==0)
        {
            break;
        }
        i=0;
       while(arr[i]<=num)
       {
           i++;
       }
       res=i;
       page=arr[i]-num;
       printf("%lld %lld\n",page,res);
    }
}
