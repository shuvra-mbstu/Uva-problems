#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[107],s[107],ss[6]="E-N-D",st[107];
    int j=0,l=0,coun,i,k;
    while(scanf("%s",str)!=EOF)
    {
        j=strlen(str);
        k=0;
        for(i=0;i<j;i++)
        {
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||str[i]=='-')
                {
                   if(str[i]>='A'&&str[i]<='Z')
                   {
                       st[k]=str[i]+32;
                   }
                   else {
                    st[k]=str[i];
                   }
                    k++;
                }
        }
        st[k]='\0';
         if(l<k)
        {
            strcpy(s,st);
            l=k;
        }
        if(strcmp(str,ss)==0){
        printf("%s\n",s);
        break;
        }
}
}
