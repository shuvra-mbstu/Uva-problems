#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int test, num, arr1[1000], arr2[1000],res,sum,cas=0;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&num);
        for(int i=0;i<num;i++)
        {
            scanf("%lld%lld",&arr1[i],&arr2[i]);
        }
        for(int i=0;i<num-1;i++)
        {
            for(int j=i+1;j<num;j++)
            {
                if(arr2[i]>arr2[j])
                {
                    int temp=arr2[i];
                    arr2[i]=arr2[j];
                    arr2[j]=temp;
                    temp=arr1[i];
                    arr1[i]=arr1[j];
                    arr1[j]=temp;
                }
            }
        }
        res=0;
        sum=0;
        for(int i=0;i<num;i++)
        {
            sum=arr1[i];
            if((arr2[i]>arr2[i-1]  && i>0)||(i==0)){
            for(int j=i+1;j<num;j++)
            {
                sum=sum+arr1[j];
            }
          //  cout<<sum<<endl;
            sum=sum*arr2[i];
                   //     cout<<sum<<endl;
        }
        if(res<sum)
        {
            res=sum;
        }
        }
        printf("Case %lld: %lld\n",++cas,res);
    }
}
