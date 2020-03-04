#include<stdio.h>
int main()
{
    int number,i, count=0,a, c,d,e,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    for(i=a; i<=b; i++)
    {
        c=i;
        while(c!=0)
        {
            d=c%10;
            c=c/10;
            if(d == 0)
            {
                count++;
            }
        }
    }
        printf("%d",count);

}
