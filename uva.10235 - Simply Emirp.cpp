#include<bits/stdc++.h>
using namespace std;
long long int arr[1000000];
int main()
{
    long long int num,i,j,res;
    memset(arr,0,sizeof(arr));
    for(i=4;i<=1000000;i+=2)
    {
        arr[i]=1;
    }
    for(i=3;i<=1000;i++)
    {
        if(arr[i]==0)
        {
            for(j=i*i;j<=1000000;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    while(scanf("%lld",&num)!=EOF)
    {
       res=0;
        i=num;
        while(i!=0)
        {
            res=res*10+i%10;
            i=i/10;
        }
        if(arr[num]==0&&arr[res]==0&&num!=res)
        {
            printf("%lld is emirp.\n",num);
        }else if(arr[num]==0)
        {
            printf("%lld is prime.\n",num);
        }
        else
            printf("%lld is not prime.\n",num);
    }
}
