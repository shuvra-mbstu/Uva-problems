#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int len, i, j, k,sum,num,res;
    while(scanf("%d",&num)!=EOF)
    {
        getline(cin,s);
       len = s.size();
       for(i=0;i<len;i++)
       {
           if(s[i]=='Z'){
            sum=0;
            k=1;
           }
           else if(s[i]=='R')
           {
               sum=1;
               k=0;
               while((s[i]!='D')||(i<len))
               {
                   i++;
                   sum++;
                   if(s[i]=='R')
                   {
                       sum=0;
                       k=0
                   }
                   if(s[i]=='Z')
                   {
                       sum=0;
                       k=1;
                       break;
                   }
                   if(s[i]=='D')
                   {
                       k=1;
                       break;
                   }
               }
               if(k==1)
               {
                    res = sum;
               }
           }
       }
    }
}
