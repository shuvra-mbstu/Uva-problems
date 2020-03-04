#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,j,sum,k;
    while(scanf("%d",&num)!=EOF)
    {
        k=0;
        if(num==0)
        {
            break;
        }

        for(i=1;i<=((num/2)-1);i++)
        {
            for(j=i+1;j<=num/2;j++)
            {
             sum =((j*j*j)-(i*i*i));
                if(sum==num)
                {
                     k =1;
                    break;
                }
            }
            if(sum==num)
            {
                break;
            }
        }
        if(k==0)
            printf("No solution\n");
        else
            printf("%d %d\n",j,i);
    }
}
