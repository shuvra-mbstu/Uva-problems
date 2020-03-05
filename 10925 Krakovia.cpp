#include<bits/stdc++.h>
using namespace std;
string sum(string s1, string s2)
{
    string ss;
    int len1=s1.size();
    int len2=s2.size();
    if(len1>len2)
    {
        while(s1.size()>s2.size())
        {
            s2.insert(s2.begin(),'0');
        }
    }
    else  if(len2>len1)
    {
        while(s2.size()>s1.size())
        {
            s1.insert(s1.begin(),'0');
        }
    }
    // cout<<s1<<endl<<s2<<endl;
    len1=s1.size();
    int mod=0;
    for(int i=len1-1; i>=0; i--)
    {
        int a=(s1[i]-'0')+(s2[i]-'0')+mod;
        //int mod=a%10;
        mod=a/10;
        a=a%10;
        ss+=(a+'0');
    }
    if(mod!=0)
    {
        ss+=mod+'0';
    }
    // cout<<ss<<endl;
    reverse(ss.begin(),ss.end());
    while(ss[0]=='0')
    {
        ss.erase(ss.begin());
    }
    return ss;
}
string div(string s1, int num)
{
     int len=s1.size();
     string ss="";
     int n=0,ress=0,v=0;
     for(int i=0; i<len; i++)
     {
          n=(n*10)+(s1[i]-'0');
          v=(n/num);
        // cout<<n<<"   "<<v<<"   "<<s1[i]<<endl;
          ss+=(v+'0');
          n=n%num;
     }
        //reverse(ss.begin(),ss.end());

      while(ss[0]=='0')
    {
        ss.erase(ss.begin());
    }
    if(ss.size()==0)
    {
         ss+='0';
    }
     return ss;
}
int main()
{
     int num, val,cas=0;
     string st,ss,sd;
     while(scanf("%d%d",&num,&val)!=EOF)
     {
          if(num==0 && val==0)break;
          ss="";
          for(int i=0;i<num;i++)
          {
                              cin>>st;
            ss=sum(ss,st);
          }
          sd=div(ss,val);
printf("Bill #%d costs ",++cas);
cout<<ss;
printf(": each friend should pay ");
          cout<<sd<<"\n\n";
     }
}
