#include<stdio.h>
int main ()
{
    int num1,num2,num3;
    while(scanf("%d%d%d",&num1,&num2,&num3) != EOF)
    {
        if(num1== num2&&num2 == num3)
        {
            printf("*\n");
        }
        else if(num1==num2)
        {
            printf("C\n");
        }
        else if(num1 == num3)
        {
            printf("B\n");
        }
        else if(num2==num3)
        {
            printf("A\n");
        }
    }
    return 0;
}
