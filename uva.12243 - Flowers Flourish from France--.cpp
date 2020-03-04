#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[20000];
    int len,j,k,i,l,m,c,a;
    while(gets(ch))
    {
        k=0;
    len=strlen(ch);
    if(ch[0]=='*')
    {
        break;
    }
    m=0;
     j=ch[0]-'A';
        l=ch[0]-'a';
    for(i=1;i<len;i++)
    {

      if(ch[i]==' '&&ch[i+1]!=' ')
        {
            m++;
            a=(ch[i+1]-'a');
            c=ch[i+1]-'A';
            if(c==l||c==j)
               {
            k++;
            }
            else if(a==j||a==l)
            {
                k++;
            }

    }
    }
    if(k==m)
    {
        printf("Y\n");
    }
     else
        {
            printf("N\n");
        }
}
return 0;
}
