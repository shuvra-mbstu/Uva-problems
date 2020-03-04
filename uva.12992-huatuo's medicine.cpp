#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,res,num,i=0;
    scanf("%d",&test);
    while(test--)
    {
        i++;
        scanf("%d",&num);
        res=num*2-1;
        printf("Case #%d: %d\n",i,res);
    }
}
