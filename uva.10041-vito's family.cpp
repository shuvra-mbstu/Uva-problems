#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,family,arr[30007],i,j,dis[30007];
    scanf("%d",&test);
    while(test--)
    {
        memset(arr,0,sizeof(arr));
        scanf("%d",&family);
        for(i=0; i<family; i++)
        {
            scanf("%d",&arr[i]);
        }
        memset(dis, 0, sizeof(dis));
        for(i=0; i<family; i++)
        {
            for(j=0; j<family; j++)
            {
                if(arr[i]>arr[j])
                {
                    dis[i]=dis[i]+(arr[i]-arr[j]);
                }
                else
                    dis[i]=dis[i]+(arr[j]-arr[i]);
            }


        }
        sort(dis,dis+family);
        printf("%d\n",dis[0]);
    }
}
