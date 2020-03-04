#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    int i,j,k,len,coun,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",ch);
        coun=0;
        len=strlen(ch);
        j=1;
        for(i=0; i<len; i++)
        {
            if(ch[i]=='X')
            {
                j=0;
            }
                    coun = coun+j;
                    j++;
        }
        printf("%d\n",coun);
    }
}

