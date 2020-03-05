#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum[50], coun, num, res,cas=0;
    while(scanf("%d",&num)!=EOF)
    {
        if(num<0)
        {
            break;
        }
        sum[0]=num;
        for(int i=1; i<=12; i++)
        {
            scanf("%d",&sum[i]);
          //  sum[i]=sum[i]+sum[i-1];
        }
        printf("Case %d:\n",++cas);
        for(int i=1;i<=12; i++)
        {
            scanf("%d",&res);
            if(res<=sum[i-1])
            {
                sum[i]=sum[i]+sum[i-1]-res;
                printf("No problem! :D\n");
            }
            else
            {
                sum[i]=sum[i]+sum[i-1];
                printf("No problem. :(\n");
        }
    }
    }
    return 0;
}
