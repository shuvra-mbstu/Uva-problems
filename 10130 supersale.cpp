#include<bits/stdc++.h>
using namespace std;
int w8[1007], objct,price[1007],test, sum, coun, res, persn, prsnw8;
bool vis[1007][107];
int dp[1007][107];
int func(int i, int wight)
{
    if(i==objct)return 0;
    if(vis[i][wight]==1)return dp[i][wight];
    int profit1=0, profit2=0;
    if(wight+w8[i]<=prsnw8)
    {
        profit1=price[i]+func(i+1,wight+w8[i]);
    }
    profit2=func(i+1,wight);
    dp[i][wight]=max(profit1,profit2);
    vis[i][wight]=1;
    return dp[i][wight];
}
int main()
{
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&objct);
        for(int i=0; i<objct; i++)
        {
            scanf("%d%d",&price[i],&w8[i]);
        }
        scanf("%d",&persn);
        sum=0;
        for(int i=0; i<persn; i++)
        {
            memset(vis,false,sizeof(vis));
            //bool vis[107][1007];
            scanf("%d",&prsnw8);
            sum=sum+func(0,0);
        }
        printf("%d\n",sum);
    }
}
