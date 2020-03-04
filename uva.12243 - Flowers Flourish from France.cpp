#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch,c,str1,st,j,i;
    vector<string>ans,str;
    int len ,k;
    while(getline(cin,ch))
    {
        getline(cin,str1);
        stringstream ss(ch);
        while(ss>>c)
        {
            ans.push_back(c[0]);
        }
        stringstream s(str1);
        while(s>>st)
        {
            str.push_back(st[0]);
        }
        k=0;
        vector <string> :: iterator i,j;
        j=str.begin();
        for(i=ans.begin(); i<ans.end(); i++)
        {
            if(*j!=*i)
            {
                printf("no\n");
                k=1;
                break;
            }
            j++;
        }
        if(k==0)
        {
            printf("yes\n");
        }
    }
    return 0;
}
