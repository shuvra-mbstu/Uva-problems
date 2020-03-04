#include<bits/stdc++.h>
using namespace std;
long long int i,j,arr[100000],num;
int main()
{
   // memset(arr,1,sizeof(arr));
    arr[0]=1;
    for(i=1;i<=20;i++)
    {
        arr[i]=arr[i-1]*i;
        printf("%d\n",arr[i]);
    }

}
