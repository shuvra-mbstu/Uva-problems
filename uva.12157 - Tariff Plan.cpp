#include<bits/stdc++.h>
using namespace std;
int mile(int num)
{
    int sum=0,i,n;
    n=(num/60);
    i=num%60;
    if(i<30)
    {
        sum=n*20+10;
    }
    else
    {
        sum=(n+1)*20;
    }
    return sum;
}
int juice(int num)
{
    int n,sum,i;
    n=num/120;
    i=num%120;
    if(i<60)
    {
        sum=n*30+15;
    }
    else
    {
        sum = (n+1)*30;
    }
    return sum;
}
int main ()
{
    int test,num,arr[1000],i,j,k=0,mil[100],jui[100],sum1,sum2;
    scanf("%d",&test);
    while(test--)
    {
        k++;
        sum1=0;
        sum2=0;
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            scanf("%d",&arr[i]);
            mil[i]=mile(arr[i]);
            jui[i]=juice(arr[i]);
            sum1=sum1+mil[i];
            sum2=jui[i]+sum2;
        }
        if(sum1<sum2)
        {
            printf("Case %d: Mile %d\n",k,sum1);
        }
        else if(sum2<sum1)
        {
            printf("Case %d: Juice %d\n",k,sum2);
        }
        else if(sum1==sum2)
        {
            printf("Case %d: Mile Juice %d\n",k,sum1);
        }
    }
    return 0;
}
