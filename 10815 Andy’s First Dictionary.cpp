#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st, ss, s2, s1;
    set<string>s3;
    int i, num;
    while(getline(cin,st))
    {
        int len=st.size();
        for(i=0;i<len;i++)
        {
            if((st[i]>='A')&&(st[i]<='Z'))
                st[i]=st[i]+32;
                else if(!(st[i]>='a'&&st[i]<='z'))
                    st[i]=' ';
                  //  cout<<st[i]<<"  ";
        }
        stringstream s(st);
        while(s>>s2)
        {
         // int  len=s2.size();
         //cout<<s2<<endl;
            for(i=0;i<s2.size();i++)
            {
                if(!(s2[i]>='a'&&s2[i]<='z'))
                {
                    s2.erase(s2.begin()+i);
                    i--;
                }
            }
            s3.insert(s2);
        }
    }
    set<string>::iterator it;
    for(it=s3.begin();it!=s3.end();it++)
    {
        cout<<(*it)<<endl;
    }
}
