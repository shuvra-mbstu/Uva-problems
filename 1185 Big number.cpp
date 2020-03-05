#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, test, cas=0, coun,res;
    double sum;
    scanf("%lld",&test);
    cas=0;
    while(test--)
    {
        scanf("%lld",&num);
        sum=1;
        for(int i=1;i<=num;i++)
        {
            sum=sum+log10(i);
        }
        res=floor(sum);
        printf("%lld\n",res);
    }
    return 0;
}
