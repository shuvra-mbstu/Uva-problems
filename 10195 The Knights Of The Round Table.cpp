#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num1,num2,num3,k,res;
    while(scanf("%lf%lf%lf",&num1,&num2,&num3)==3)
    {
        if(num1<0)
            num1=(num1*-1);
              if(num2<0)
            num2=(num2*-1);
              if(num3<0)
            num3=(num3*-1);

        k=(num1+num2+num3)/2;
        res=((sqrt(k*(k-num1)*(k-num2)*(k-num3)))/k);
        if((num1==0)&&(num2==0)&&(num3==0))
        printf("The radius of the round table is: 0.000\n");
        else
        printf("The radius of the round table is: %.3lf\n",res);
    }
}
