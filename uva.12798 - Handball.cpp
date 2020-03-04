#include<bits/stdc++.h>
using namespace std;
int main()
{
    int plyr,match,score[150][150],i,j,coun,res;
    while(scanf("%d%d",&plyr,&match)!=EOF)
    {
        res=0;
        for(i=0;i<plyr;i++)
        {
            coun=0;
            for(j=0;j<match;j++)
            {
                scanf("%d",&score[i][j]);
                if(score[i][j]!=0)
                {
                    coun++;
                }
            }
            if(coun==match)
            {
                res++;
            }
        }
        printf("%d\n",res);
    }
}
