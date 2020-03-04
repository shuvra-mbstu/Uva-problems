#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num1,num2,res;
    scanf("%d",&test);
    while(test--)
    {
       scanf("%d%d",&num1,&num2);
       res = (num1/3)*(num2/3);
       printf("%d\n",res);
    }
    return 0;
}
