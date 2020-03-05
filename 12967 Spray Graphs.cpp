#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test, num, sum=0,arr[50];
    arr[0]=1;
    for(int i=1;i<=30;i++)
    {
        sum=(2*sum)+4;
        arr[i]=sum;
    }
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&num);
      printf("%lld\n",arr[num-1]);
    }
    return 0;
}
