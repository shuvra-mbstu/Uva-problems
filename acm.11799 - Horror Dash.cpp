#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j, i, test, n, num1[10007];
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&num1[j]);
        }

        sort(num1,num1+n);

        printf("Case %d: %d\n",i,num1[n-1]);
    }
}
