#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum, coun,num1,num2,num3,num4;
    while(scanf("%d%d%d%d",&num1,&num2,&num3,&num4)!=EOF)
    {
        if(num1==0 && num2==0 && num3==0 && num1==0 && num4==0)
            break;

        sum=1080;
        if(num1<num2)
        {
            sum=sum+((40+num1-num2)*9);
        }
        else
            sum=sum+((num1-num2)*9);

        if(num3<num2)
        {
            sum=sum+((40+num3-num2)*9);
        }
        else
            sum=sum+((num3-num2)*9);

        if(num3<num4)
        {
            sum=sum+((40+num3-num4)*9);
        }
        else
            sum=sum+((num3-num4)*9);

        printf("%d\n",sum);
    }
}
