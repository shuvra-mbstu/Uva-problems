#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st, ss;
    while(cin>>st>>ss)
    {
       // cout<<st<<ss;
        long long int siz, i,j,k,coun=0;
        siz=ss.size();
        for(i=0;i<siz;i++)
        {
            if(st[coun]==ss[i])
            {
                coun++;
            }
        }
        k=st.size();
        //cout<<coun<<" "<<k<<endl;
        if(coun==k)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
