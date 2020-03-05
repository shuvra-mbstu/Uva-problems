#include<bits/stdc++.h>
using namespace std;
int main()
{
    double hour, min1,i,j,k,hrdeg,mindeg,sum;
    char c;
    while(scanf("%lf%c%lf",&hour,&c,&min1)!= EOF)
    {
        if((hour==0)&&(min1==0))
        {
            break;
        }
        hrdeg=((hour*30)+(min1*(.5)));
        mindeg=(min1*6);
        if(mindeg>hrdeg)
        {
            sum=mindeg-hrdeg;
        }
        else
            sum=hrdeg-mindeg;
        if(sum>180)
            sum=360-sum;
        printf("%.3lf\n",sum);
    }
    return 0;
}
