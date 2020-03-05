#include<bits/stdc++.h>
using namespace std;
double p,q,r,s,t,u,res;
double binary()
{

    double low=0.0000,mid,rtio2,ans;
    double high=1.0000;
    int cnt = 200;
    while(cnt--)
    {
        mid=(low+high)/2.0;
        rtio2=(p*exp(-mid))+(q*(sin(mid)))+(r*cos(mid))+(s*tan(mid))+(t*mid*mid)+u;
        if(rtio2>0.0000)
        {
            low=mid;
        }
        else
        {
            high=mid;
        }
    }
    if(abs(rtio2)>0.000001)
        return -1;
    return mid;
}
int main()
{
    while(scanf("%lf%lf%lf%lf%lf%lf",&p,&q,&r,&s,&t,&u)!=EOF)
    {
        res=binary();

        if(res==-1)printf("No solution\n");
        else
        {
            res=binary();
            printf("%.4lf\n",res);
        }
    }
}
