#include<bits/stdc++.h>
using namespace std;
long long int age[20000009];
int main()
{
     int test,i,j,n;
    while(scanf("%d",&test)!=EOF)
    {
        if(test==0)
        {
            break;
        }
        n=test;
        i=0;
    while(test--)
    {
        scanf("%lld",&age[i]);
        i++;
    }
    sort(age,age+n);
    for(j=0;j<n;j++)
    {
        printf("%lld",age[j]);
        if(j!=n-1)
        {
            printf(" ");
        }
    }
    printf("\n");
    }
}
