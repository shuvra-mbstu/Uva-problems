#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int i;
string c;
set<string>s;
for(i=0;i<10;i++)
{
    cin>>c;
 s.insert(c);
}
set<string>::iterator it;
for(it=s.begin();it!=s.end();it++)
{
    cout<<*it<<endl;
}
}
