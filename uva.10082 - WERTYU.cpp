#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000]="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    char ch1[1000];
    int len,i,j,len2;
    while(gets(ch1))
    {
        len = strlen(ch);
        len2=strlen(ch1);
        for(j=0; j<len2; j++)
        {
            for(i=0; i<len; i++)
            {
                if(ch1[j]!='`'&&ch1[j]!='Q'&&ch1[j]!='A'&&ch1[j]!='Z')
                {
                    if(ch1[j]==ch[i])
                    {
                        ch1[j] = ch[i-1];
                    }
                }
            }
        }
        for(i=0; i<len2; i++)
        {
            printf("%c",ch1[i]);

        }
        printf("\n");
    }
}
