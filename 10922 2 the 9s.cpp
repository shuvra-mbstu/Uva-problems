#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int sum=0;
    while(cin>>st)
    {
        sum=0;
        int res=1;
        if(st=="0")
            break;

        int len=st.size();
        for(int i=0;i<len;i++)
        {
            sum=sum+(st[i]-'0');
        }
        if(sum==9 && len>1)
        {
            res++;
        }
       // cout<<sum<<endl;
        while(sum>9)
        {
            res++;
            int num=sum;
            int coun=0;
            while(num>0)
            {
                int a=num%10;
                coun+=a;
                num=num/10;
            }
            sum=coun;
        }
        if(sum==9)
        cout<<st<<" is a multiple of 9 and has 9-degree "<<res<<".\n";
        else
        cout<<st<<" is not a multiple of 9.\n";


    }
}
