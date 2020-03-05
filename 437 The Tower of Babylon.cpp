#include<bits/stdc++.h>
using namespace std;
vector<int> arr[500];
int num,j,dp[500];
int mx_hight(int u)
{
     //cout<<u<<endl;
    if(dp[u]!=-1)return dp[u];

    if(u==j)return 0;

         int maxi=0;

    for(int v=0; v<j; v++)
    {
        //cout <<num<< "ok\n";

        //coun=1;
        if((arr[v][0]<arr[u][0])&&(arr[v][1]<arr[u][1]))
        {
            //cout<<arr[v][0]<<" "<<arr[u][0]<<endl;
            if(mx_hight(v)>maxi)
            {
                maxi=mx_hight(v);
            }
        }
    }

    dp[u] = arr[u][2]+ maxi;
    return dp[u];
}
int main()
{
    int val[7],cas=0;
    while(scanf("%d",&num)!=EOF)
    {
         if(num==0)break;

         memset(dp,-1,sizeof(dp));
          j=0;
        for(int i=0; i<num; i++)
        {
            scanf("%d%d%d",&val[0],&val[1],&val[2]);
            sort(val,val+3);

            arr[j].push_back(val[0]);
            arr[j].push_back(val[1]);
            arr[j++].push_back(val[2]);


            arr[j].push_back(val[0]);
            arr[j].push_back(val[2]);
            arr[j++].push_back(val[1]);


            arr[j].push_back(val[1]);
            arr[j].push_back(val[2]);
            arr[j++].push_back(val[0]);
        }
      //  cout<<j<<endl;
    int mx=0;

       for(int i=0; i<j; i++)
       {
        int res=mx_hight(i);

            if(mx<res)
               mx=res;
       }

              for(int i=0; i<j; i++)
        arr[i].clear();

        printf("Case %d: maximum height = %d\n",++cas,mx);
    }
    return 0;
}
