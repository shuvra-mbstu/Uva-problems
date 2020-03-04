#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int grp,day,i,j,res;
   while(scanf("%lld%lld",&grp,&day)!= EOF)
   {
       while(day>0)
       {
           day=day-grp;
           grp++;
       }
       printf("%lld\n",grp-1);
   }
   return 0;
}
