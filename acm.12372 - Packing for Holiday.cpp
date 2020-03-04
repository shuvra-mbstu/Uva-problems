#include<stdio.h>
int main ()
{
    int heig, leng,weig, test, i, j;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d %d %d",&heig, &leng, &weig);
        if(heig<= 20 && leng <= 20 && weig <= 20)
        {
            printf("Case %d: good\n",i);
        }
        else
            printf("Case %d: bad\n",i);
    }
}
