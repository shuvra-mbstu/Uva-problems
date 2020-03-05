#include<bits/stdc++.h>
using namespace std;
int prime[100000];
void fun()
{
    prime[1]=1;
    prime[0]=1;
    for(int i=2; i<=1000; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=100007; j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
int main()
{
    memset(prime,0,sizeof(prime));
    fun();
    string st;
    int res,val;
    while(cin>>st)
    {
        res=0;
        if(st=="0")break;

        int len=st.size();
        for(int i=0; i<len; i++)
        {
            val=0;
            for(int j=i; j<=len; j++)
            {
                val=val*10+(st[j]-'0');
                if(val>100000)break;
                if((prime[val]==0) && (res<val))
                {
                    res=val;
                }
            }
        }
        printf("%d\n",res);
    }
}
