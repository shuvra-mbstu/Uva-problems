#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, i,j,k,res,sum;
    double coun;
   while(scanf("%lld",&num)!=EOF)
{
    if(num==0)
    {
        break;
    }
    coun = log2(num);
    //cout<<coun;
    i=coun;
    j=pow(2,i);
 if(num==j)
    printf("%lld\n",num);
else
{
    res=(num-j);
    sum=(res*2);
    //cout<<res<<endl<<sum<<endl;
    printf("%lld\n",sum);
}
}
    return 0;
}

