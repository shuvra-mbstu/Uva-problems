#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num1,num2,num3,area,res,maxi;
    while(scanf("%lf%lf%lf",&num1,&num2,&num3)!=EOF)
    {
        maxi =-1;
        area=((num1+num2+num3)/2);
        res=((area*(area-num1)*(area-num2)*(area-num3)));
        if(res>0)
        {
            maxi =((sqrt(res)*4)/3);
        }
        printf("%.3lf\n",maxi);
        }
    }

