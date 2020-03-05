#include<bits/stdc++.h>
using namespace std;
int ma=10000000;
int main()
{
    int test,cas=1,bust1,bust2,max1,bus,time,sum=0,num,time1,time2,sol,c;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d:%d",&num,&time1,&time2);
        time=((time1*60)+time2);
        sum=ma;
        while(num--)
        {
            scanf("%d:%d%d",&bust1,&bust2,&max1);
           bus=((bust1*60)+bust2);
           if(time>bus){
                bus=bus+(24*60);
           }
            c=max1+(bus-time);
           //cout<<"cgf :"<<bus<<endl;
           if((c <sum ))
           {
               sum=c;
          // cout<<sum<<endl;
           }
        }
        printf("Case %d: %d\n",cas++,sum);
    }
}
