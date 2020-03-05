#define mx 10007
#include<bits/stdc++.h>
using namespace std;
int vis[mx];
vector <int> vt[mx];
void dfs(int num)
{
    if(vis[num]==1)
        return;

    vis[num]=1;
    for(int i=0; i<vt[num].size(); i++)
    {
        int k= vt[num][i];
        dfs(k);
    }
}
int main()
{
    int test, node, query, num,aa;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        memset(vis,0,sizeof(vis));
        int x,y,coun=0;
        scanf("%d%d%d",&node,&query, &num);
        for(int j=0;j<query; j++)
        {
            scanf("%d%d",&x,&y);
            vt[x].push_back(y);
        }
        for(int k=0;k<num;k++)
        {
            scanf("%d",&aa);
            dfs(aa);
        }
        for(int j=1;j<=node;j++)
        {
            if(vis[j]==1)
            {
                coun++;
            }
            vt[j].clear();
        }
        printf("%d\n",coun);
    }
    return 0;
}
