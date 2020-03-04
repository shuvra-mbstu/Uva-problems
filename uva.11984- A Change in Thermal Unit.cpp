#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int test,i=0;
    float temp ,res,num1,num2;
    scanf("%d",&test);
    while(test--)
    {
        i++;
        scanf("%f%f",&num1,&num2);
        temp = (((num1*9)/5)+32)+num2;
        res =(((temp-32)/9)*5);
        printf("Case %d: %.2f\n",i,res);
    }

}
