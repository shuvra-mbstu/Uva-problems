#include<stdio.h>
int main ()
{
    int number=0,d=0,l,num[10000],a,b,c,k,i,j;
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
        d=0;
         int e = 0;
        while(c!=0)
        {
            e++;
            num[d]=c%10;
            d++;
            c=c/10;
        }
        int count = 0;
        for(k=0;k<e-1;k++)
        {
            for(j=k+1;j<e;j++)
            {
                if(num[k]==num[j])
                    count ++;
            }
            if(count!=0)
            {
                break;
            }
        }
        if(count == 0)
        {
            number++;
        }
    }
    printf("the number without repeted is :%d",number);

}
