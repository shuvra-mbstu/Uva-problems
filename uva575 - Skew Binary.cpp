#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p,k,i,j,len,res;
    char ch[10000];
    while(scanf("%s",ch)!=EOF)
    {
        len=strlen(ch);
        k=len;
        res=0;
        if(ch[0]=='0')
            break;
        for(i=0;i<len;i++)
        {
            p=pow(2,k);
            res=res+((ch[i]-'0')*(p-1));
            k--;
        }
        printf("%lld\n",res);
    }
    return 0;
}
