#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num1,num2,num3,num,res;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%f%f%f",&num1,&num2,&num3);
        num=num3/(num1+num2);
        res=num*num1+(num1-num2)*num;
        printf("%.f\n",res);
    }
}
