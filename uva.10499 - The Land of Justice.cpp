#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, test;
    double res;
    while(scanf("%lld",&num)!=EOF)
    {
        if(num<0)
        {
            break;
        }
        if(num==0||num==1)
        {
            res=0;
        }
        else
        {
            res=(double)num/4;
        }
        test = res*100;
        printf("%lld%%\n",test);
    }
}
