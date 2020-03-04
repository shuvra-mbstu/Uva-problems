#include<bits/stdc++.h>
using namespace std;
 long long int fibbo(long long int num)
{
   unsigned long long int a,b,sum=0,flag=1;
     a = 0;
     b = 1;
    while(flag != num)
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
   unsigned long long int res;
    while(scanf("%lld",&num)!= EOF)
    {
        res =fibbo(num+1);
        printf("The Fibonacci number for %lld is %lld\n",num,res);
    }
}
