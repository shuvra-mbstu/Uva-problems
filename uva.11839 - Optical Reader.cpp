#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, arr[6],i,j,k;
    while(scanf("%d",&num)!=EOF)
    {
        while(num--)
        {
            scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
        }
        if((arr[1]==arr[2])&&(arr[2]==arr[3])&&(arr[3]==arr[4])&&(arr[0]!=arr[4]))
        {
            printf("A\n");
        }
       else if((arr[0]==arr[2])&&(arr[2]==arr[3])&&(arr[3]==arr[4])&&(arr[1]!=arr[4]))
        {
            printf("B\n");
        }
       else if((arr[1]==arr[0])&&(arr[1]==arr[3])&&(arr[3]==arr[4])&&(arr[2]!=arr[4]))
        {
            printf("C\n");
        }
       else if((arr[1]==arr[0])&&(arr[2]==arr[1])&&(arr[2]==arr[4])&&(arr[3]!=arr[4]))
        {
            printf("D\n");
        }
       else if((arr[1]==arr[2])&&(arr[2]==arr[3])&&(arr[3]==arr[0])&&(arr[0]!=arr[4]))
        {
            printf("E\n");
        }
        else if()
}
