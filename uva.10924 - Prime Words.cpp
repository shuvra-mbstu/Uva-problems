#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[27];
    int i,j,k,len,res=0,sum;
    while(scanf("%s",ch)!=EOF)
    {
        sum =0;
        res = 0;
        len=strlen(ch);
        for(i=0; i<len; i++)
        {
            if(ch[i]>='a'&&ch[i]<='z')
            {
                sum=sum+(ch[i]-'a'+1);
            }
            else if(ch[i]>='A'&&ch[i]<='Z')
            {
                sum=sum+(ch[i]-38);
            }
        }
        for(j=2; j<=sqrt(sum); j++)
        {
            if(sum%j!=0)
            {
                res=0;
            }
            else
            {
                res=1;
                break;
            }
        }
        if(res==0)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
}
