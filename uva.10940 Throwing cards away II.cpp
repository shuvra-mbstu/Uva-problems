#include<bits/stdc++.h>
using namespace std;
long long int arr[500007];
int main()
{
    long long int num, i,j,k,res,sum;
    double coun;
for(i=1;i<=500006;i++)
{
    k = log2(i);
    j=pow(2,k);
 if(i==j)
    arr[i]=i;
else
{
    res=(i-j);
    arr[i]=(res*2);
    //cout<<res<<endl<<sum<<endl;
}
}
while(scanf("%lld",&num)!=EOF){
        if(num==0)
        break;
    printf("%lld\n",arr[num]);
}
    return 0;
}

