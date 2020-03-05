#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=-1,len,sum,coun,res;
    string st;
    while(getline(cin,st))
    {
        len=st.size();
        sum=0;
       // if(len==0)
          //  cout<<endl;
        for(int j=0;j<len;j++){
                if((st[j]>='0')&&(st[j]<='9'))
                {
                    sum=sum+(st[j]-'0');
                   //cout<<sum<<endl<<st[j]<<endl;
                }
                else if(((st[j]>='A')&&(st[j]<='Z'))||(st[j]=='*'))
                {
                  //  cout<<st[j]<<"%";
                    while(sum!=0)
                    {
                        cout<<st[j];
                        sum--;
                    }
                   // cout<<sum<<endl;
                    //sum=0;
                }
                else if((st[j]=='b'))
                {
                   // cout<<st[j]<<"b";
                    while(sum!=0){
                        cout<<" ";
                        sum--;
                    }
                }
                else if(st[j]=='!')
                {
                    cout<<endl;
                    sum=0;
                }
     //   cout<<st[i]<<endl;
    }
    cout<<endl;
}
}
