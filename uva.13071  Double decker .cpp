#include<bits/stdc++.h>
using namespace std;
long long int arr[10007][10007];
int main()
{
    long long int bus,upper,lower,i,j,k,l,n;
        l=0;
        for(i=0;i<=10000;i++)
        {
            for(j=0,k=i;j<=i;j++,k--)
            {
                l++;
                arr[j][k]=l;
            }
        }
        scanf("%lld",&bus);
        for(i=0;i<bus;i++)
        {
            scanf("%lld%lld",&upper,&lower);
                    n=arr[upper][lower];
                    printf("%lld\n",n);
        }
        return 0;
    }
