#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test, arr[10007],num,i,j,k,coun;
    scanf("%lld",&test);
    for(i=0;i<test;i++)
    {
        scanf("%lld",&num);
        for(j=0;j<num;j++)
        {
            scanf("%lld",&arr[j]);
        }
        coun=0;
        for(j=1;j<=num;j++)
        {
           for(k=0;k<num;k++)
           {
               if(arr[k]!=(-1)&&arr[k]==j)
               {
                   coun++;
                   break;
               }
               else
               {
                   arr[k]=-1;
               }
           }
        }
        printf("Case %lld: %lld\n",i+1,num-coun);
    }
}
