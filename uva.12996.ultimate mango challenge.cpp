#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num,limit,arr[100],arr2[100],i=0,j,sum,k;
    scanf("%d",&test);
        while(test--)
        {
            sum=0;
            k=1;
        i++;
        scanf("%d%d",&num,&limit);
        for(j=0;j<num;j++)
        {
            scanf("%d",&arr[j]);
            sum=sum+arr[j];
        }
        for(j=0;j<num;j++)
        {
            scanf("%d",&arr2[j]);
        }
        for(j=0;j<num;j++)
         {
             if(arr2[j]<arr[j])
             {
                 k=0;
                 break;
             }
         }
        if(k==0||sum>limit)
        {
            printf("Case %d: No\n",i);
        }
        else
            printf("Case %d: Yes\n",i);

    }
    return 0;
}
