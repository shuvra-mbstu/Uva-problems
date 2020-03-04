#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s, u, v, t, a, i,j=0;
    while(scanf("%lf",&i)!= EOF)
    {
        j++;
        if(i==0)
        {
            break;
        }
       else if(i==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            a = ((v-u)/t);
            s = ((u*t)+(.5*a*t*t));
            printf("Case %.lf: %.3lf %.3lf\n",j,s,a);
        }
        else if(i==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            s = (((v*v)-(u*u))/(2*a));
            t =((v-u)/a);
            printf("Case %.lf: %.3lf %.3lf\n",j,s,t);
        }
       else if(i==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v =sqrt((u*u)+(2*a*s));
            t = ((v-u)/a);
            printf("Case %.lf: %.3lf %.3lf\n",j,v,t);
        }
       else if(i==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u =sqrt((v*v)-(2*a*s));
            t = ((v-u)/a);
            printf("Case %.lf: %.3lf %.3lf\n",j,u,t);
        }
    }
}
