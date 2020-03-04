#include<stdio.h>

int main()
{
    long long int num1, num2, d, i, f,num,j;

    while(scanf("%lld %lld",&num1, &num2)==2)
    {
        if(num1==0&&num2==0)
            {
                break;
            }
        f = 0;

        if(num1 > num2)
        {
            i = num1;
            num1 = num2;
            num2 = i;
        }
        for(j = num1; j <= num2; j++)
        {
            i=0;
            d =j;
            do
            {
                i++;
                if(d %2 != 0)
                {
                    d = 3*d + 1;

                }
                else
                {
                    d = d/2;
                }
            }
            while(d!=1);
                if(i > f)
                {
                    f = i;
                    num = j;
                }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",num1, num2,num,f );
    }
}
