#include<bits/stdc++.h>
using namespace std;
long long int num1, num2,res;
int main()
{
    int coun;

    while(scanf("%lld%lld",&num1,&num2)!=EOF)
    {
        if(num1==0&&num2==0)
        {
            break;
        }
        res=((num2/5)-(num1/5))+1;
        printf("%lld\n",res);
    }
}
