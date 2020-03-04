#include<stdio.h>
int main ()
{
    int i=0,j=0;
    char num1[6],num2[6];
    while(gets(num1))
    {
       gets(num2);
       j = 0;
        for(i=0; i<5; i++)
        {
            if(num1[i]!=num2[i])
            {
                j++;
            }
            else
            {
               j = 0;
               break;
            }
        }
        if (j == 0)
            printf("N\n");
        else if(j == 5)
            printf("Y\n");
    }
}
