#include<bits/stdc++.h>
using namespace std;
long long int arr[500007],arr2[500007];
int main()
{
    long long int test,num,i;
    while(scanf("%lld",&test)!=EOF)
    {
        if(test==0)
        {
            break;
        }
        for(i=0; i<test; i++)
        {
            scanf("%lld%lld",&arr[i],&arr2[i]);
        }
        sort(arr,arr+test);
        sort(arr2,arr2+test);
        num=0;
        for(i=0; i<test; i++)
        {
            if(arr[i]==arr2[i])
            {
                num++;
            }
        }
        if(num==test)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}
