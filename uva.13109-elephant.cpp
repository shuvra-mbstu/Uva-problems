#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int test,num,higst,coun,sum,arr[100000],i,j,k;

    scanf("%lld",&test);
    for(i=0; i<test ; i++)
    {
        coun = 0;
        sum = 0;
        scanf("%lld%lld",&num,&higst);
        for(j=0; j<num; j++)
        {
            scanf("%lld",&arr[j]);
        }
        sort(arr,arr+num);
        for(j=0; j<num; j++)
        {
                sum = sum + arr[j];
                if(sum>=higst)
                {
                    break;
                }
                coun++;
        }
        printf("%lld\n",coun);
    }
    return 0;
}
