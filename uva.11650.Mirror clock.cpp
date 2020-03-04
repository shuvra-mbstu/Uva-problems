#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hr,mi,test,sum,res2;
    char c;
    int res1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%c%d",&hr,&c,&mi);
        sum=(720-((hr*60)+mi));
        if(sum<0)
        {
            res1=11;
            res2=60+sum;
        }
        else
        {
            res1 = sum/60;
            res2=sum%60;
        }
        if(res1<10&&res1!=0)
        {
            printf("0%d:",res1);
        }
        else if(res1==0)
        {
            printf("12:");
        }
        else
        {
            printf("%d:",res1);
        }
        if(res2<10)
        {
            printf("0");
        }
        printf("%d\n",res2);
    }
    return 0;
}
