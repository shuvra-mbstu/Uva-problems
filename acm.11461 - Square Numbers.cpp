#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    int num1, num2,c,i,b,count;
    while(scanf("%d%d", &num1, &num2) ==2 )
    {
        count =0;
        if(num1==0&&num2==0)
            break;
        if(num1>num2)
        {
            c=num1;
            num1 = num2;
            num2 = c;

        }
        if(num1 == 0|| num2 ==0)
            count=count-1;
        for(i = num1; i<=num2; i++)
        {
            a = sqrt(i);
            if(a == (int) a)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}
