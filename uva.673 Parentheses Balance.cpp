#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,s;
    stack<string> stak;
    int num, test, i, j,k,len;
    scanf("%d",&test);
    getchar();
    for(j=0;j<test;j++)
    {
        while(stak.size()!=0)
        {
            stak.pop();
        }
        //cout<<i<<endl;
       // getchar();
        getline(cin,st);
        k=1;
      //  cout<<st<<endl;
         for(i=0;i<(st.size());i++)
            {
              //  cout<<st[i]<<endl;
                if((st[i]!=')')&&(st[i]!=']')){
                s=(st[i]);
                //cout<<s;
                //cout<<s<<endl;
                stak.push(s);
            }
            else
            {
                if(stak.size()==0)
                {
                    k=0;
                    break;
                }
                s=(st[i]);
                if((s=="]")&&(stak.top()=="["))
                {
                    //cout<<s<<endl;
                    stak.pop();
                }
                else if((s==")")&&(stak.top()=="("))
                {
                    stak.pop();
                }
            }
            }
           // cout<<k<<endl;
        if((stak.size()==0)&&(k!=0))
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
