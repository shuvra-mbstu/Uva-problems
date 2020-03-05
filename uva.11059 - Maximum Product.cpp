#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    long long int arr[20],i,j,test,num,k=0,l,sum,cas=0;
    while(scanf("%lld",&test)!=EOF)
    {
        k=0;
        i=0;
        j=test;
        sum =1;
        l=0;
        while(j--)
        {
            scanf("%lld",&arr[i]);
            i++;
        }
        for(int i=0; i<test; i++)
        {
            sum=arr[i];
             if(l<sum)
            {
                l=sum;
            }
            for(j=i+1;j<test;j++){
            sum=sum*arr[j];
             if(l<sum)
            {
                l=sum;
            }
            }
        }
        // cout<<sum;
        printf("Case #%lld: The maximum product is %lld.\n\n",++cas,l);
    }
    return 0;
}
