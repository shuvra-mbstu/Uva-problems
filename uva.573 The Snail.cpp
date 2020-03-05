#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);
    double high,percen,slid,climb,test,cas,sum,res,coun;
    while(scanf("%lf",&high)==1){
    if(high==0)
    {
        scanf("%lf%lf%lf",&climb,&slid,&test);
        break;
    }
        scanf("%lf%lf%lf",&climb,&slid,&test);
        sum=climb;
        if(climb<=high)
        {
            sum=sum-slid;
        }
        coun=1;
        percen=((test/100)*climb);
        while((sum>=0)&&(sum<=high))
        {
            ++coun;
            climb=climb-percen;
           if(climb<0)
            {
                climb=0;
            }
            sum=sum+climb;
            if((sum>=0)&&(sum<=high))
            {
                sum=sum-slid;
            }
         //   cout<<coun<<endl<<climb<<endl<<percen<<endl<<slid<<endl<<sum<<endl;
        }
        if(sum>high)
        {
            printf("success on day %.lf\n",coun);
        }
        else
            printf("failure on day %.lf\n",coun);
    }
    return 0;
}
