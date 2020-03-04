#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,res,i,j;
    while(scanf("%d",&num)!=EOF)
    {
        if(num==0)
        {
            break;
        }
        res=((num*(num+1)*((2*num)+1))/6);

        printf("%d\n",res);
    }
}
