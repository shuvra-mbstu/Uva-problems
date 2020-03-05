#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, num3, num4,res;
    while(scanf("%d%d%d%d",&num1,&num2,&num3,&num4)!=EOF)
    {
        if(num1==0 && num2==0 && num3==0 && num4==0)
        {
            break;
        }
        if(num1==num3 && num2==num4)
        {
            printf("0\n");
        }
       else if ((abs(num3-num1)== abs(num4-num2) ) || ( (num1-num3)==0 ) || ((num4-num2)==0))
        {

                printf("1\n");
            }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}
