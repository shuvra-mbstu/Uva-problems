#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, num, arr[1007],sum,i,j;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&num);
        i=-1;
        sum=0;
        j=num;
        while(j--)
        {
            i++;
            scanf("%d",&arr[i]);
        }
        sum = 0;
        for(i=1;i<num;i++)
        {
            for(j=0;j<i;j++)
            {
                if(arr[j]<=arr[i])
                {
                    sum++;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
