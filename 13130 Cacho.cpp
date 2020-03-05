#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, sum, coun, res, arr[10];
    scanf("%d",&test);
    while(test--)
    {
        int j=0;
        for(int i=0;i<5;i++)
        {
            scanf("%d",&arr[i]);
            if((i!=0)&&((arr[i-1]+1)==arr[i]))
            {
                j++;
            }
        }
        if(j==4)
            printf("Y\n");
        else
            printf("N\n");
    }
}
