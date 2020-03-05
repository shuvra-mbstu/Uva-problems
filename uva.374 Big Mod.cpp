#include<bits/stdc++.h>
using namespace std;
long long int mnum;
long long int func(long long int num,long long int pw)
{
    long long int sum;

    if(pw==0)
    {
      return 1;
    }
    if(pw%2==0)
    {
        sum = func(num,pw/2);
        return(((sum%mnum)*(sum%mnum))%mnum);
    }
    else
    {
        return(((num%mnum)*( func(num,pw-1)%mnum))%mnum);
    }
}
int main()
{
    long long int num, pw, i, j ,k, res;
    while(scanf("%lld%lld%lld",&num,&pw,&mnum)!=EOF)
    {
        res=(func(num,pw));
        printf("%lld\n",res);
    }
}
