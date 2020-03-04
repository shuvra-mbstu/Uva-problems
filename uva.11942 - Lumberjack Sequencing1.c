#include<stdio.h>
int main ()
{
    int test,num[20],i,l=0,j,count1,count2;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d",&num[j]);
        }
        count1=0;
        count2=0;
        for(j=1; j<10; j++)
        {
           if(num[j-1]>num[j])
           {
               count1++;
           }
           if(num[j-1]<=num[j])
           {
               count2++;
           }
        }
        if(l==0)
            printf("Lumberjacks:\n");
            l++;
        if((count1!=9)&&(count2!=9))
        {
            printf("Unordered\n");
        }
        else
            printf("Ordered\n");

    }
}
