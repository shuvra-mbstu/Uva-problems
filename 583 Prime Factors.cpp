#include<bits/stdc++.h>
using namespace std;
#define mx  1000000
int arr[mx+5];
vector<long long int>prime,factor;
void sieve()
{
    prime.push_back(2);
    for(int i=3;i<=mx;i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
            for(int j =i+i;j<=mx;j+=2*i)
            {
                arr[j]=1;
            }
        }
    }
}
int main()
{
    sieve();
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        factor.clear();
        long long int num = n;
        if(n<0)
        {
            n=(n*-1);
        }
        //cout<<n<<endl;
        for(int i=0;prime[i]*prime[i]<=n;i++)
        {
            while(n%prime[i]==0)
            {
                factor.push_back(prime[i]);
                n=n/prime[i];
            }
        }
        if(n>1)
        {
            factor.push_back(n);
        }
        printf("%lld =",num);
        if(num<0)
        {
            printf(" -1 x");
        }
        for(int i=0;i<factor.size();i++)
        {
            printf(" %lld",factor[i]);
            if(i==(factor.size()-1))
                break;
            printf(" x");
        }
            printf("\n");

    }
}
