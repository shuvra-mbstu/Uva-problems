#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num1,num2,arr[10],i,j;
    while(scanf("%d",&test)!=EOF)
    {
        if(test==0)
        break;
        scanf("%d%d",&num1,&num2);
        while(test--)
        {
            scanf("%d%d",&arr[0],&arr[1]);
            i=arr[0]-num1;
            j=arr[1]-num2;
            if(i==0||j==0)
            {
                printf("divisa\n");
            }
            else if(i>0&&j>0)
            {
                printf("NE\n");
            }
            else if(i>0&&j<0)
            {
                printf("SE\n");
            }
            else if(i<0&&j>0)
            {
                printf("NO\n");
            }
            else if(i<0&&j<0)
            {
                printf("SO\n");
            }
        }
    }
    return 0;
}
