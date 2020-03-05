#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num,arr[10],i,j,res;
    while(scanf("%d",&test)!=EOF)
    {
        if(test==0)
        {
            break;
        }
        num=0;
        res=0;
        for(i=0; i<test; i++)
        {
            num=0;
            for(j=0; j<5; j++)
            {
                scanf("%d",&arr[j]);
                if(arr[j]>=0&&arr[j]<=127)
                {
                    res=j;
                    num++;
                }
            }
            if(num==0||num>1)
            {
                printf("*\n");
            }
            else if(num==1)
            {
                printf("%c\n",res+65);
            }
        }
    }
}
