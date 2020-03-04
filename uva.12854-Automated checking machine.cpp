#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num1[10],num2[10],i,j,coun;
    while(scanf("%d%d%d%d%d",&num1[0],&num1[1],&num1[2],&num1[3],&num1[4])!=EOF)
    {
        coun=0;
        for(i=0; i<5; i++)
        {
            scanf("%d",&num2[i]);
            if(num1[i]!= num2[i])
            {
                coun++;
            }
        }
            if(coun == 5)
                printf("Y\n");
            else
                printf("N\n");
    }
    return 0;
}
