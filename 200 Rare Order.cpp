#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,ss[100000];
   int arr[30];
    int   i=0,len=0;
    while(cin>>ss[i++])
    {
   memset(arr,0,sizeof(arr));
    while(cin>>ss[i++]){
        if(ss[i-1]=="#")break;

        if(len<ss[i-1].size())
        {
            len=ss[i-1].size();
        }
    }
    st="";
    for(int j=0;j<len;j++)
    {
         for(int k=0;k<i-1;k++)
         {
              if(j<ss[k].size() &&  arr[ss[k][j]-'A']==0)
              {
                   st+=ss[k][j];
                arr[ss[k][j]-'A'] =1;
               }
         }
    }
   cout<<st<<endl;
   i=0;
   len=0;
    }
    //cout<<"no";
}
