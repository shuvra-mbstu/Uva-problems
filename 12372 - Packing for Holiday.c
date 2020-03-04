#include<stdio.h>
int main()
{
    float length,hight,width;
    int i,t,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f %f %f",&length ,&hight, &width);
        if((length<=20&&length>0)&&(hight<=20&&hight>0)&&(width<=20&&width>0))
        printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }

}
