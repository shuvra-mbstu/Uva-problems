#include<bits/stdc++.h>
using namespace std;
int main()
{
   string st,ss,s;

    long long int i,l,j,t,c,d;
    while(cin>>st)
    {
       // t=s.size();

       // for(int i=0;i<len;i++)
        //{
            //if(s[i])
        //}
    sort(st.begin(),st.end());
    ss=st;
    reverse(st.begin(),st.end());

                     d=0;
                     int len=st.size();
                     for(int i=0;i<len;i++)
                     {
                         d=d*10+st[i]-'0';
                     }
                    len=ss.size();
                    c=0;
                    int coun=0;
                     for(int i=0;i<len;i++)
                     {
                         c=c*10+ss[i]-'0';
                         if(c==0 && ss[i]=='0')
                         {
                             coun++;
                         }
                         else if(c>0 && coun>0)
                         {
                             while(coun>0)
                             {
                                 c=c*10;
                                 coun--;
                             }
                         }
                     }

        long long int e=(d-c);
        long long int f=(e/9);
        printf("%lld - %lld = %lld = 9 * %lld\n",d,c,e,f);
    }
    return 0;
}
