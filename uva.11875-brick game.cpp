#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num[100],n,i,j,k,result;
    scanf("%d",&n);

for(i=0; i<n; i++)
{
    scanf("%d",&k);
    for(j=0; j<k; j++)
    {
        scanf("%d",&num[j]);
    }
    //sort(num,num+k);
    result = k/2;
    printf("Case %d: %d\n",i+1,num[result]);
}
}
