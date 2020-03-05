#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st, chr,ss,s2;
    int len,i,j,k;
    while(getline(cin,st))
    {
       // k=-1;
      len=st.size();
      i=0;
          if(((st[i]>='A')&&(st[i]<='Z'))||((st[i]>='a')&&(st[i]<='z')||(st[i]==' ')||(st[i]=='!')||(st[i]==',')||(st[i]=='.')||(st[i]==':')||(st[i]==';')||(st[i]=='?')))
          {
              for(i=0;i<len;i++)
      {
                j=st[i];
                stringstream s ;
                s.clear();
                ss.clear();
                s<<j;
                s>>ss;
            reverse(ss.begin(),ss.end());
              // cout<<j<<ss<<endl;
                s2=ss+s2;
                }
          }
              // cout<<s2<<endl;
          else
          {
            reverse(st.begin(),st.end());
              for(i=0;i<len;i+=2)
              {
                  stringstream s;
                 s.clear();
                  ss.clear();
                  j=((st[i]-'0')*10)+(st[i+1]-'0');
                  if(j<32)
                  {
                      i=i+1;
                      j=(j*10+(st[i+1]-'0'));
                  }
                  if(j>122)
                  {
                      s<<j;
                      s>>ss;
                  }
                  else
                  ss=j;
                //  cout<<j<<ss<<endl;
                 // s>>ss;
                  s2=s2+ss;
              }
          }
         // st.clear();
          cout<<s2<<endl;
                    st.clear();
                    s2.clear();
      }
      return 0;
    }
