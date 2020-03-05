#include<bits/stdc++.h>
using namespace std;
#define mx  1000000
int arr[mx+5];
vector<long long int>prime,factor;
void sieve()
{
    prime.push_back(2);
    for(int i=4; i<=mx; i+=2)
    {
        arr[i]=1;
    }
    for(int i=3; i<=mx; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
            //cout<<i<<endl;
            for(int j =i+i; j<=mx; j+=i)
            {
                arr[j]=1;
            }
        }
    }
}
int main()
{
    memset(arr,0,sizeof(arr));
    sieve();
    long long int n,dif,di;
    while(scanf("%lld",&n)==1)
    {
        dif=-n;
        if(n==0)
            break;
        factor.clear();
        long long int num = n;
        //cout<<n<<endl;
        for(int i=0; prime[i]+prime[i]<=n; i++)
        {
         //  cout<<prime[i]<<endl;
            n=num;
            n=n-prime[i];
            if(arr[n]==0)
            {
                di=  abs(prime[i]-n);
                if(di>dif)
                {
                    dif=di;
                    factor.clear();
                    factor.push_back(prime[i]);
                    factor.push_back(n);
                }
            }
            n=num;
        }
        printf("%lld:\n",num);
        for(int i=0; i<factor.size(); i++)
        {
            printf("%lld",factor[i]);
            if(i==(factor.size()-1))
                break;
            printf("+");
        }
        if(factor.size()<1)
        {
            printf("NO WAY!");
        }
        printf("\n");

    }
}
