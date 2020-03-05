#include<bits/stdc++.h>
using namespace std;
#define ma 1000000000
int main()
{
    long long int test,num, i, j=ma, k, cas=0, sum,res=0,coun=0;
    scanf("%lld",&test);
    while(test--)
    {
        j=0;
        scanf("%lld",&num);
        if(num<0)
        {
            i=num*(-1);
        }
        else
        i=num;
        sum=0;
        while(1){
       sum = 0;
        while(i>0)
        {
            k=i%10;
            i=i/10;
            sum=sum+(k*k);
        }
        if(sum==1)
        {
            res=1;
            break;
        }
        else if((sum<10)&&(sum>1))
        {
            res=0;
            break;
        }
        i=sum;
        }
    if(res==1)
    {
        printf("Case #%lld: %lld is a Happy number.\n",++cas,num);
    }
    else if(res==0)
    {
        printf("Case #%lld: %lld is an Unhappy number.\n",++cas,num);
    }
    }
    return 0;
}
