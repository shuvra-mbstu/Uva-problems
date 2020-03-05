#include<bits/stdc++.h>
using namespace std;
vector<string> vt;
int main()
{
     string st,s2;
     int test;
     scanf("%d",&test);
     while(test--)
     {
          cin>>st;
          if(st=="Sleep")
          {
               cin>>s2;
               vt.push_back(s2);
          }
          else if(st=="Test")
          {
               if(vt.size()==0)
               {
                    printf("Not in a dream\n");
               }
               else{
               string ss=vt.back();
               cout<<ss<<endl;
               }
          }
          else if(st=="Kick")
          {
               if(vt.size()>0)
               vt.pop_back();
          }
     }
}
