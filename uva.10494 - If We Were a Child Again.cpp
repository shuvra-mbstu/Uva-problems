#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num1,num2,i,res,len1,l,len2,j,k;
    string st,ch;
    while(cin>>st>>ch)
    {
        scanf("%lld",&num1);
        num2=0;
        //  cout<<num1<<endl<<ch<<endl<<num2<<endl;
        len1=ch.size();
        len2=st.size();
        for(j=0; j<len1; j++)
        {
            if(ch[j]=='/')
            {
                k=1;
                break;
            }
            else if(ch[j]=='%')
            {
                k=0;
                break;
            }
        }
        if(k==1)
        {
            l=0;
            res=0;
            i=0;
            while((num2<num1)&&(l<len2))
            {
                num2= (num2*10)+(st[l++]-'0');
            }
            i=num2/num1;
            cout<<i;
            while(l<len2)
            {
                num2=num2%num1;
                num2= (num2*10)+(st[l++]-'0');
                i=num2/num1;
                cout<<i;
                //printf("%lld\n",i);
            }
            cout<<endl;
        }
        else if(k==0)
        {
            l=0;
            res=0;
            i=0;
             while((num2<num1)&&(l<len2))
                {
                    num2= (num2*10)+(st[l++]-'0');
                }
                i=num2%num1;
            while(l<len2)
            {
                    num2= (num2*10)+(st[l++]-'0');
                i=num2%num1;
                num2=i;
                //res=res*10+i;
            }
            res=i;
            cout<<res<<endl;
        }
    }
    return 0;
}
