#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,k,j,number;
    double avg, res,sum,count,num[10007];
    scanf("%d",&k);
    for(i=0; i<k; i++)
    {
        count = 0;
           sum = 0;

        scanf("%d",&number);
        for(j=0; j<number; j++)
        {
            scanf("%lf",&num[j]);
            sum = sum + num[j];
        }
        avg = sum / number;
        count = 0;
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
