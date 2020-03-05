#define mx 1000000007
#include<bits/stdc++.h>
using namespace std;
long long int num1,num2,coun,elemnt,flg;
map<long long int,int> mp;
int main()
{
    while(scanf("%lld%lld",&num1,&num2)!=EOF)
    {
//vt.assign(vt.size(), 0);
        coun=0;
        if(num1==0 && num2==0)
        {
            break;
        }
        for(int i=0;i<num1;i++)
        {
            scanf("%lld",&elemnt);
           mp[elemnt]=1;
        }
        for(int j=0;j<num2;j++)
        {
            scanf("%lld",&elemnt);
            if(mp[elemnt]==1)
            {
                coun++;
            }
        }

        printf("%lld\n",coun);
        mp.clear();
}
return 0;
}
