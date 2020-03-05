#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,ss;
    int test, num, cas=0;
    double res,coun;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        getline(cin,st);
        int len =st.size();
        res=0;
       // cout<<len<<endl;
        for(int i=0; i<len; i++)
        {
            num=0;
           while(st[i]!=' ' &&(st[i]>='0' && st[i]<='9'))
            {
                num=num+(st[i]-'0');
                i++;
               // cout<<num<<endl;
            }
            if(i<=4){
            res=res+(num*.5);
            }
           else if(i>=5){
                res=res+(num*.05);
            }
               //     cout<<res<<"#"<<endl;
        }
        printf("Case %d: ",++cas);
        cout<<res<<endl;
    }
}
