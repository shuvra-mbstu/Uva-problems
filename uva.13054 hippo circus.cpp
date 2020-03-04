#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,num,height,tim1,tim2,i,j,k,numd[100010],sum;
    scanf("%lld",&test);
    for(i=0; i<test; i++)
    {
        sum=0;
        scanf("%lld%lld%lld%lld",&num,&height,&tim1,&tim2);
        for(j=0; j<num; j++)
        {
            scanf("%lld",&numd[j]);
        }
        for(j=0; j<num; j++)
        {
            for(k=j+1; k<num; k++)
            {
                if(((numd[j]+ numd[k])<height)&&(numd[j]>0)&&(numd[k]>0))
                {
                    sum = sum+tim2;
                    numd[j]=-1;
                    numd[k]=-1;
                    break;
                }
            }

            if(numd[j]>0)
            {
                sum = sum+tim1;
                numd[j]=-1;
            }
        }
        printf("Case %lld: %lld\n",i+1,sum );
    }
    return 0;
}
