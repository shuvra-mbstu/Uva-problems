#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
            b=b-a;
    }
    return a;
}
int main()
{
    long long int num, test,arr[15], arr2[15],i, l,j,k,coun,cas=0,res,up,down,sum;
    scanf("%lld",&test);
  for(l=0;l<test;l++)
    {
        scanf("%lld",&num);
        sum = 1;
        for(i=0;i<num;i++)
        {
            scanf("%lld",&arr[i]);
            sum = sum*arr[i];
        }
        j=sum;
        res = 0;
        for(i=0;i<num;i++)
        {
            coun = (sum/arr[i]);
            res=res + coun;
        }
        k =gcd(res,j);
        up = ((sum*num)/k);
        down=(res/(k));
        k=gcd(up,down);
            up=up/k;
           down= down/k;
    printf("Case %lld: %lld/%lld\n",++cas,up,down);
}
}
