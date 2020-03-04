#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i=0,j;
    double avg1,avg2,num1,num2,res;
    scanf("%d",&test);
    while(test--)
    {
        i++;
        scanf("%lf%lf%lf%lf",&avg1,&avg2,&num1,&num2);
        res=(((avg2*(num1+num2))-(avg1*num1))/num2);
        if(res<=10&&res>=0)
            printf("Case #%d: %.2lf\n",i,res);
        else
            printf("Case #%d: Impossible\n",i);
    }
    return 0;
}
