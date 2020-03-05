#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char, double>mp;
   long long int numlin, test,numchr,num,siz,mpsiz;
    double sum,res,coun;
    string st;
    char ss, chr;
    scanf("%lld",&test);
    for(int i=0;i<test;i++)
    {
        mp.clear();
        scanf("%lld",&numchr);
        for(int j=0;j<numchr;j++)
        {
            cin>>ss>>num;
            mp[ss]=num;
        }
        coun=0;
        scanf("%lld",&numlin);
        getchar();
        for(int j=0;j<numlin;j++)
        {
           getline(cin,st);
          // cout<<st<<endl;
            //getchar();
            siz=st.size();
          // map<char, double>::  iterator it;
         //for(it=mp.begin();it!=mp.end();it++)
            //{
                for(int l=0;l<siz;l++)
                {
                    if(mp[st[l]]>0)
                    {
                        coun=coun+mp[st[l]];
                            //cout<<st[l]<<" "<<mp[st[l]]<<" "<<coun<<endl;
                    }
                }
            }
            coun=coun/100;
            printf("%.2lf$\n",coun);
    }
    return 0;
    }
