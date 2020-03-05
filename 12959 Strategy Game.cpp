#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2, test, sum, arr[1000], coun,index,higst;
    while(scanf("%d%d",&num1,&num2)==2){
    memset(arr,0,sizeof(arr));
    higst=-1;
    for(int i=1;i<=(num1*num2);i++)
    {
        scanf("%d",&coun);
        int j=(i%num1);
        if(j==0)
        {
            arr[num1]=arr[num1]+coun;
            if(higst<arr[num1])
            {
                higst=arr[num1];
            }
        }
        else
        {
            arr[j]=arr[j]+coun;
              if(higst<arr[j])
            {
                higst=arr[j];
            }
        }
    }
   for(int i=num1;i>=1;i--){
    if(arr[i]==higst)
   {
       printf("%d\n",i);
       break;
   }
}
}
return 0;
}
