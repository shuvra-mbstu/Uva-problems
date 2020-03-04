#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,a,b,c,res,lim,i,j,k,coun,d;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&lim)!=EOF)
    {
        if(a==0&&b==0&&c==0&&d==0&&lim==0)
        {
            break;
        }
        coun =0;
        for(i=0;i<=lim;i++)
        {
            res=((a*i*i)+(b*i)+c);
            if(res%d==0)
            {
                coun++;
            }
        }
        printf("%lld\n",coun);
    }
}
