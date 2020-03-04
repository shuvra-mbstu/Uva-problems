#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,res,i=0;
    while(scanf("%d",&num)!=EOF)
    {
        i++;
        if(num==0)
        {
            break;
        }
       printf("Case %d: %d\n",i,num/2);
    }
}
