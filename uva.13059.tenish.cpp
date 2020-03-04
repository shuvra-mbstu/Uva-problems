#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num,sum1,i=1;
    while(scanf("%lld",&num)!=EOF)
    {
        while(num/i>i)
        {
            i++;
            if(((num/i)==i)&&((num%i)==0))
            {
                sum1=i;
            }
            else if(num/i<i&&num%i<i)
                sum1= i;
        }
        printf("%lld\n",sum1);
    }
}

