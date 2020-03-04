#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test, num1,num2,res,i,j;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld%lld",&num1,&num2);
        res=(((num2-1)*(num2)/2)-((num2-num1-1)*(num2-num1)/2));
        printf("%lld\n",res);
    }
}
