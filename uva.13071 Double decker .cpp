#include<bits/stdc++.h>
using namespace std;
int car(int n,int m)
{
     int coun =0,num=0,i,j;
while(coun!=(n+m+1))
        {
            coun++;
            for(i=0,j=coun-1; i<=coun-1; i++,j--)
            {
                   num++;
                   if(i==n&&j==m)
                    return num;
            }
        }
}
int main()
{
    int test,num1,num2,res;

    scanf("%d",&test);
    while(test--)
    {
           scanf("%d%d",&num1,&num2);
           res = car(num1,num2);
        printf("%d\n",res);
    }
}
