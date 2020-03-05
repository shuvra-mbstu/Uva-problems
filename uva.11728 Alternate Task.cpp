#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,cas=0,sum,test,res,i,j,k,arr[1007];
    arr[0]=1;
    for(i=1;i<=1000;i++)
    {
        arr[i]=arr[i-1]*i;
    }
    while(scanf("%d",&num)!=EOF)
    {
        cas++;
        if(num==0)
        {
            break;
        }
        sum=0;
        i=1;
        while(sum<=num)
        {
            sum=sum+arr[i];
            i++;
        }
        if(sum==num)
        {
            printf("Case %d: %")
        }
    }
}
