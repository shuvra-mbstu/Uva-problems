#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,arr[1000],sum,i=0,j;
    while(scanf("%d",&num)!=EOF)
    {
        if(num==0)
        {
            break;
        }
        i++;
        j=0;
        sum=0;
        while(num--)
        {
            scanf("%d",&arr[j]);
            if(arr[j]==0)
            {
                sum=sum-1;
            }
            else if(arr[j]>=1&&arr[j]<=99)
            {
                sum=sum+1;
            }
            j++;
        }
        printf("Case %d: %d\n",i,sum);
    }
}
