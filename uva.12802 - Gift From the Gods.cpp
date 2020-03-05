#include<bits/stdc++.h>
using namespace std;
#define mx 1000007
long long int arr[mx];
int main()
{
    memset(arr, 0, sizeof(arr));
    long long int num,result,i,j,k,res,numb,l;
    for(i=4; i<=mx; i=i+2)
    {
        arr[i]=1;
    }
    for(i=3; i<=10000; i++)
    {
        if(arr[i]==0)
        {
            for(j=i*i; j<=mx; j=j+i)
            {
                arr[j]=1;
            }
        }
    }
    while(scanf("%lld",&num)!= EOF)
    {
        k=num;
        res=0;
        result = 2*num;
        while(k!=0)
        {
                res=res*10+k%10;
                k=k/10;
        }
        if((res==num)&&(arr[num]==0))
        {
            printf("%lld\n",result);
            break;

        }
        printf("%lld\n",result);
    }
    return 0;
}
