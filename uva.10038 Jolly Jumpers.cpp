#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int num, sum, i,j,k[3007], a,b,arr[3007];
    while(scanf("%d",&num)!=EOF)
    {
        b=0;
        for(i=0; i<num; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0; i<num-1; i++)
        {
            k[i]=abs(arr[i+1]-arr[i]);
        }
        sort(k,k+i);
        for(i=1; i<num; i++)
        {
            if(k[i]==k[i-1])
            {
                b=1;
                break;
            }
        }
        if(b==1)
        {
            printf("Not jolly\n");
        }
        else
            printf("Jolly\n");
    }
    return 0;
}
