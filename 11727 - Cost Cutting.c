#include<stdio.h>
int main()
{
    int a,b,c,i,t,mid;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            if(a>c)
        {
          if(b>c)
                mid=b;
          else
            mid=c;
        }
        else
            mid=a;

        }
        else if(b>a)
        {
            if(b>c)
            {
                if(c>a)
                 mid=c;
                else
                    mid=a;
            }
        else if(c>b)
        {
            mid=b;
        }

        }
        printf("Case %d: %d\n",i,mid);
    }

}
