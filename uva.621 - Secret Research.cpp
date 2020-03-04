#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000],c;
    int test,len,i,j,k;
    scanf("%d",&test);
    {
        getchar();
        while(test--)
        {
            gets(ch);
            len=strlen(ch);
            if(len==1&&((ch[0]=='1')||(ch[0]=='4')))
                printf("+\n");
            else if(len==2&&ch[0]=='7'&&ch[1]=='8')
            {
                printf("+\n");
            }
            else if(ch[len-1]=='5'&&ch[len-2]=='3'&&len!=2)
            {
                printf("-\n");
            }
            else if(ch[0]=='9'&&ch[len-1]=='4'&&len!=2)
            {
                printf("*\n");
            }
            else if(ch[0]=='1'&&ch[1]=='9'&&ch[2]=='0'&&len!=3)
            {
                printf("?\n");
            }
            else
                printf("?\n");
        }
    }
}
