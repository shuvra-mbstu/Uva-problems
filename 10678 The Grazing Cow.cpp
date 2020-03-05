#include<bits/stdc++.h>
using namespace std;
#define pi 2*(acos(0.0))
int main()
{
    int test;
    double num1,num2, sum, high,wedth;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf%lf",&num1,&num2);
        wedth=num2/2;
        num1=num1/2;
        high=sqrt((wedth*wedth)-(num1*num1));
        sum=pi*high*wedth;
        printf("%.3lf\n",sum);
    }
}
