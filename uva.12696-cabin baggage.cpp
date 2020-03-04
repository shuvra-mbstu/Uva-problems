#include<bits/stdc++.h>
using namespace std;
int main()
{
   double length,width,weight,depth;
   int test,coun;
    while(scanf("%d",&test)!=EOF)
    {
        coun =0;
        while(test--)
        {
        scanf("%lf%lf%lf%lf",&length,&width,&depth,&weight);
        if((length<=56&&width<=45&&depth<=25&&weight<=7)||(((length+width+depth)<=125)&&weight<=7))
        {
          printf("1\n");
          coun++;
        }
        else
            printf("0\n");
        }
        printf("%d\n",coun);
    }
}
