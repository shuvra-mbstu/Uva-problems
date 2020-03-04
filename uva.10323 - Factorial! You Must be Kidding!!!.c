#include<stdio.h>
long long int fac(long long int num)
{
    if(num== 0)
        return 1;
    else
        return num*fac(num-1);
}
int main()
{
    long long int num,i;
    while(scanf("%lld",&num)!= EOF)
    {
        if((num%2!=0)&&(num<0))
        {
            printf("Overflow!\n");
        }
        else if((num%2==0)&&(num<0))
       {
            printf("Underflow!\n");
        }
       else if(num>13)
        {
            printf("Overflow!\n");
        }
       else if(num<8)
        {
            printf("Underflow!\n");
        }
        else
        {
           i = fac(num);
            printf("%lld\n",i);
        }
    }
    return 0;
}
