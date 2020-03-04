#include<stdio.h>
int main ()
{
    int i,k,j,count;
    double avg, res,sum,number,num[1007];
    scanf("%f",&k);
    for(i=0; i<k; i++)
    {
        count = 0;
           sum = 0;

        scanf("%lf",&number);
        for(j=0; j<number; j++)
        {
            scanf("%lf",&num[j]);
            sum = sum + num[j];
        }
        avg = sum / number;
        for(j=0; j<number; j++)
        {
            if(avg<num[j])
            {
                count++;
            }
        }
       res = ((count*100)/number);
      printf("%.3lf%%\n",res);
    }
}
