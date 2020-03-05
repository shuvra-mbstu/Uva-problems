#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,k,res,cas=0, sum,len1,len2;
    string st, ct,ss,s2,s;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        getline(cin,st);
        getline(cin,ct);
        if(st==ct)
        {
            printf("Case %d: Yes\n",++cas);
        }
        else
        {
            s.clear();
            stringstream ss(st);
            while(ss>>s2)
            {
                s=s+s2;
            }
            //cout<<s<<endl;
            //len1=st.size();
           // len2=ct.size();
            if(s==ct)
                printf("Case %d: Output Format Error\n",++cas);
        else
                printf("Case %d: Wrong Answer\n",++cas);
    }
    }
        return 0;
}
