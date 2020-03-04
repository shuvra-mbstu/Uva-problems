#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num,s_weight,allnum,i,j,k,sum,all,res;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d%d%d",&num,&allnum,&s_weight);
    sum=0;
    all=0;
    k=1;
    for(j=1;j<=num;j++)
    {
        sum=sum+j;
        if((j>=s_weight)&&(k<=(allnum)))
        {
            all=all+j;
            k++;
        }
    }
    res=sum-all;
    printf("Case %d: %d\n",i+1,res);
}
}
