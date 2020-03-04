#include<bits/stdc++.h>
using namespace std;
long long int num,res;
int main()
{
long long int k, i,j,l;
    while(scanf("%lld",&num)!= EOF)
    {
       i=(num/2+1);
       j=i*i;
       k=(j*2)-1;
       res=((k*3)-6);
        printf("%lld\n",res);
    }
}
