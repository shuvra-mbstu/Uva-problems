#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,gcd,lcm,num1,num2,k,i,j,sum,l;
    scanf("%lld",&test);
    while(test--)
    {
        k=0;
        scanf("%lld%lld",&gcd,&lcm);
            if(lcm%gcd==0)
            {
                num1=gcd;
                num2=lcm;
                k=-1;
                printf("%lld %lld\n",num1,num2);
            }
            else
            {
                k=0;
            }
        if(k==0)
        {
            printf("-1\n");
        }
    }
}
