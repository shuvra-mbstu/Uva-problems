#include<bits/stdc++.h>
using namespace std;
int arr[50000];
int m=1;
void fun(int num){
arr[0]=1;
int carry=0;
m=1;
for(int i=2;i<=num;i++)
{

     for(int j=0;j<=m;j++)
     {
          arr[j]=arr[j]*i+carry;
          carry=arr[j]/10;
          arr[j]=arr[j]%10;
     }
while(carry!=0)
{
     arr[m]=carry%10;
     carry=carry/10;
     m++;
}
}
}
int main()
{
     int num;
     while(scanf("%d",&num)!=EOF)
     {
     fun( num);
          printf("%5d -> ",num);
          for(int i=0;i<=m;i++)
          {
               if(arr[i]!=0){
               printf("%d\n",arr[i]);
               break;
               }
          }
          //printf("\n");
     }
}
