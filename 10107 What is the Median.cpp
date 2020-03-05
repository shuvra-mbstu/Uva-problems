#include<bits/stdc++.h>
using namespace std;
#define mx 10007
int arr[mx];
int main()
{
     int i=1,res,num;
    arr[0]=-1000000;
     while(scanf("%d",&num)!=EOF)
     {
         // cout<<arr[i-1]<<endl;
         arr[i++]=num;
          int len=i-1;
          sort(arr,arr+len+1);

        //  for(int j=0;j<=len;j++)
          //cout<<arr[j]<<endl;

          if(len%2 ==1)
          {
               res=(len/2)+1;
               printf("%d\n",arr[res]);
          }
          else
          {

               int len1=len/2;

               res=(arr[len1]+arr[len1+1])/2;
               //cout<<arr[len1]<<" "<<arr[len1-1];
               printf("%d\n",res);
          }
     }
}
