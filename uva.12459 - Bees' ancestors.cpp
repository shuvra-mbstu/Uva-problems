#include<bits/stdc++.h>
using namespace std;
long long int fibbo(long long int num)
{
    unsigned long long int a,b,sum=1,flag=1;
    a = 0;
    b = 1;
    while(flag <= num)
    {
        flag ++;
        sum =(a+b);
        a = b;
        b = sum;
    }
    return sum;
}
int main ()
{
    long long int num,i,j;
    unsigned long long int res,male;
    while(scanf("%lld",&num)!= EOF)
    {
        i=0;
        res=0;
        if(num==0)
            break;
            res=fibbo(num);
        printf("%lld\n",res);
    }
}
