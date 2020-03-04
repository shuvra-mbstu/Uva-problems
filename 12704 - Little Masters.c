#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,a,b,t,i,s,l;
    scanf("%f",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f %f %f",&x,&y,&r);
        a=sqrt(x*x+y*y);
s=r-a;
if(s<0)
{
    s=s*(-1);
}
l=r+a;
printf("%.2f %.2f\n",s,l);
    }
}
