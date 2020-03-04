#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i=0;
    double distanc,u,v,res,tim1,tim2;
    scanf("%d",&test);
    while(test--)
    {
        i++;
        scanf("%lf%lf%lf",&distanc,&v,&u);
        if(v==0||u==0||v>=u)
        {
            printf("Case %d: can't determine\n",i);
        }
        else
        {
            tim1=distanc/u;
            tim2=distanc/(sqrt((u*u)-(v*v)));
            res=tim2-tim1;
            printf("Case %d: %.3lf\n",i,res);
        }
    }

}
