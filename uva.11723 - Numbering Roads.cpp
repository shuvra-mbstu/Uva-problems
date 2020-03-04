#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,integer,road;
    while(scanf("%d%d",&road,&integer)!=EOF)
    {
        i++;
        if(road==0&&integer==0)
        {
            break;
        }
        if(((integer*26)+integer)<road)
        {
            printf("Case %d: impossible\n",i);
        }
        else
        {
            j=0;
            while(((integer*j)+integer)<road)
            {
                j++;
            }
            printf("Case %d: %d\n",i,j);
        }
    }
    return 0;
}
