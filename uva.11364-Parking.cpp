#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, store,park[100],i,j,sum;
    while(scanf("%d",&test)==1)
    {
        for(i=0; i<test; i++)
        {
            sum=0;
            scanf("%d",&store);
            for(j=0;j<store;j++)
            {
                scanf("%d",&park[j]);
            }
            sort(park,park+store);
            for(j=0;j<store;j++)
            {
                if(j==(store-1))
                {
                    sum = park[store-1]-park[0]+sum;
                }
                else
                    sum=(park[j+1]-park[j])+sum;
            }
            printf("%d\n",sum);
        }
    }
}
