#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int num, arr[100],dis,res,cas,i,j,k;
   while(cin>>num)
   {
       if(num==0)
       {
           break;
       }
       i=0;
       res=0;
       j=num;
       while(j--)
       {

           cin>>arr[i];
           i++;
       }
       sort(arr,arr+num);
       k=0;
       for(i=1;i<num;i++)
           {
               if(i==(num-1))
               {
                   k=(2*abs(1422-arr[i]));
               }
                j= abs(arr[i-1]-arr[i]);
               if(j>200||k>200)
               {
                   res =1;
               }
           }
       if(res!=1)
        cout<<"POSSIBLE"<<endl;
       else
        cout<<"IMPOSSIBLE"<<endl;
   }

}
