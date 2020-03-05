#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    string st, ss;
    map<string, int> mp;
    scanf("%d",&num);
    getchar();
    for (int i=0;i<num;i++)
    {
        getline(cin,st);
        stringstream s2(st);
        s2>>ss;
       // cout<<ss<<endl;

        mp[ss]++;
    }
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
