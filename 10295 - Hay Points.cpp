#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<string,long long int> mp;
    long long int num,test,val,sum,res,coun;
     string st,ss;
     scanf("%lld%lld",&num,&val);
     for(int i=0;i<num;i++)
     {
          cin>>ss>>res;
          mp[ss]=res;
     }
     for(int i=0;i<val;i++)
     {
          sum=0;
          //getchar();
          st=" ";
          while(st!=".")
          {
               cin>>st;
               sum+=mp[st];
               //getchar();
          }
          cout<<sum<<endl;
     }
}
