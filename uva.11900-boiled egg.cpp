#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test, num, p, q, i ,j, k,weight[1000],result,count;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        int sum =0;
        count = 0;
        scanf("%d%d%d",&num, &p, &q);
        for(j=0;j<num; j++)
        {
            scanf("%d",&weight[j]);
        }
        sort(weight,weight+num);
        int l=0;
        while(q>sum)
        {
            sum = sum + weight[l];
            l++;
            count ++;
            if(sum>q)
            {
                count = count -1;
                break;
            }

        }
        if(count>=p)
        {
            if(p>=num)
                result = num;
            else
                result = p;
        }
        else
            {
               if(count>=num)
                result = num;
            else
                result = count;
            }
        printf("Case %d: %d\n",i+1,result);
    }
}
