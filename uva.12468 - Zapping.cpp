#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,res1,res2,i;
    while(scanf("%d%d",&num1,&num2)!=EOF)
    {
        if(num1==(-1)&&num2==(-1))
            break;
        if(num1>num2)
        {
            i=num1;
            num1=num2;
            num2=i;
        }
        res1=num2-num1;
        res2=(100-num2)+num1;
        if(res1<res2)
        {
            printf("%d\n",res1);
        }
        else
            printf("%d\n",res2);
    }
}
