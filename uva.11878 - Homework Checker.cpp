#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[107],c;
    int num1[107],num2[107],res,i=0,j,coun=0,len,k;
   string st;

    while(scanf("%d%c%d%c",&num1[i],&ch[i],&num2[i],&c)!=EOF)
    {
        cin>>st;
             if(st!="?")
        {
            len = st.size();
            k=0;
            j=0;
    while(k<len)
            {
                j=j*10+(st[k]-'0');
                k++;
            }
            if(ch[i]=='+')
            {
                res= num1[i]+num2[i];
            }
            else
            {
                res = num1[i]-num2[i];
            }
            if(res==j)
            {
                coun++;
            }
        }
        i++;
    }
    printf("%d\n",coun);
}
/*1+2=3
3-1=5
6+7=?
99-0=99
99-99=0
0-99=-99
0-99=99
2+1=3
41-10=-31
12-13=-1
*/
