#include<bits/stdc++.h>
using namespace std;
#define mx 20007
long long int arr[mx];
int main()
{
    long long int test, node, sum,maxs,num,coun=0,srt,endd,lnth,cas=0,flgg,resrt,reend;
    scanf("%lld",&test);
    while(test--)
    {
        flgg=0;
        maxs=(-10000000);
        scanf("%lld",&node);
        for(int i=1;i<node;i++)
        {
            scanf("%lld",&arr[i]);
        }
            sum=0;
            resrt=1;
            for(int j=1;j<node;j++)
            {
                sum=sum+arr[j];
                if(sum<0)
                {
                    sum=0;
                    resrt=j+1;
                }
                else if(sum==maxs)
                {
                    reend=j+1;
                    coun=reend-resrt+1;
                  //  cout<<maxs<<"  "<<coun<<"  "<<lnth<<"  "<<reend<<"  "<<endd<<endl;
                    if(coun>lnth)
                    {
                        endd=j+1;
                        srt=resrt;
                        lnth=coun;
                    }
                    else if(coun==lnth)
                    {
                        if(resrt<srt)
                        {
                            srt=resrt;
                            endd=reend;
                        }
                    }
                }
                else if(sum>maxs)
                {
                    maxs=sum;
                   srt=resrt;
                    reend=j+1;
                    endd=reend;
                    lnth=endd-srt+1;
                }
                }
        if(maxs<0)
        {
            printf("Route %lld has no nice parts\n",++cas);
        }
        else
            printf("The nicest part of route %lld is between stops %lld and %lld\n",++cas,srt,endd);
    }
}
