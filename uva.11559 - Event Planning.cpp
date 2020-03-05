#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, budget, hotel,week,bill,sum, i,l,j,k,bed,coun;
    while(scanf("%lld%lld%lld%lld",&num,&budget,&hotel,&week)!=EOF)
    {
        int m=0;
        coun = 500007;
        sum = 500007;
        for(i=0; i<hotel; i++)
        {
            scanf("%lld",&bill);
            for(j=0; j<week; j++)
            {
                scanf("%lld",&bed);
                if(bed>=num)
                {
                    sum= (bill*num);
                    // cout<<sum<<endl;
                }
                if(sum<coun)
                {
                    coun= sum;
                   // cout<<coun<<endl;
                }
            }
        }
            if(coun<=budget)
                printf("%lld\n",coun);
            else
                printf("stay home\n");
    }
    return 0;
}
/*

3 1000 2 3
200
0 2 2
300
27 3 20
5 2000 2 4
300
4 3 0 4
450
7 8 0 13
*/
