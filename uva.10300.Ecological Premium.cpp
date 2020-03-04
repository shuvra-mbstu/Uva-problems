#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,farmer,input[10],i,j,sum;
    scanf("%d",&test);
    while(test--)
    {
        sum=0;
        scanf("%d",&farmer);
    for(i=0;i<farmer;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&input[j]);
        }
        sum=sum+(input[0]*input[2]);
    }
    printf("%d\n",sum);
}
return 0;
}
