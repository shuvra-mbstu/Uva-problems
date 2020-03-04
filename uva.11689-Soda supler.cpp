#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, num[10],i,j,coun,sum;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        coun=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[j]);
        }
        sum=num[0]+num[1];
        while(sum>=num[2])
        {
            coun = coun +(sum/num[2]);
            sum=(sum/num[2])+(sum%num[2]);
        }
        printf("%d\n",coun);
    }
}
