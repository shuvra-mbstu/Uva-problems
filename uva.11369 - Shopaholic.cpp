#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, num, arr[20007],i,j,k,sum;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+num);
        sum=0;
        for(j=num-3;j>=0;j=j-3)
        {
            sum=sum+arr[j];
        }
        printf("%d\n",sum);
    }
}
