#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num,num_j,jum[1005],i,j,high,low;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        high = 0;
        low = 0;
        scanf("%d",&num_j);
        for(j=0; j<num_j; j++)
        {
            scanf("%d",&jum[j]);
        }
        for(j=0; j<num_j-1; j++)
        {
            if(jum[j+1]>jum[j])
            {
                high++;
            }
            else if(jum[j+1]<jum[j])
            {
                low++;
            }
        }
        printf("Case %d: %d %d\n",i+1,high,low);
    }
}
