#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,len,num[1000],times[1000],i,j;
    char ch[1000];
    scanf("%d",&test);
        while(test--)
        {
        scanf("%d",&len);
        for(i=0; i<len; i++)
        {
            scanf("%d",&num[i]);
        }
        for(i=0; i<len; i++)
        {
            scanf("%d",&times[i]);
        }
        for(i=0; i<len; i++)
        {
            if(num[i]==1&&times[i]==1)
            {
                ch[i]='.';
            }
            else if(num[i]==1&&times[i]==2)
            {
                ch[i]=',';
            }
            else if(num[i]==1&&times[i]==3)
            {
                ch[i]='?';
            }
            else if(num[i]==1&&times[i]==4)
            {
                ch[i]='"';
            }
            if(num[i]==7&&times[i]==1)
            {
                ch[i]='p';
            }
            else if(num[i]==7&&times[i]==2)
            {
                ch[i]='q';
            }
            else if(num[i]==7&&times[i]==3)
            {
                ch[i]='r';
            }
            else if(num[i]==7&&times[i]==4)
            {
                ch[i]='s';
            }
            if(num[i]==9&&times[i]==1)
            {
                ch[i]='w';
            }
            else if(num[i]==9&&times[i]==2)
            {
                ch[i]='x';
            }
            else if(num[i]==9&&times[i]==3)
            {
                ch[i]='y';
            }
            else if(num[i]==9&&times[i]==4)
            {
                ch[i]='z';
            }
            else if(num[i]==8&&times[i]==1)
            {
                ch[i]='t';
            }
            else if(num[i]==8&&times[i]==2)
            {
                ch[i]='u';
            }
            else if(num[i]==8&&times[i]==3)
            {
                ch[i]='v';
            }
            else if(num[i]==2&&times[i]==1)
            {
                ch[i]='a';
            }
            else if(num[i]==2&&times[i]==2)
            {
                ch[i]='b';
            }
            else if(num[i]==2&&times[i]==3)
            {
                ch[i]='c';
            }
            else if(num[i]==3&&times[i]==1)
            {
                ch[i]='d';
            }
            else if(num[i]==3&&times[i]==2)
            {
                ch[i]='e';
            }
            else if(num[i]==3&&times[i]==3)
            {
                ch[i]='f';
            }
            else if(num[i]==4&&times[i]==1)
            {
                ch[i]='g';
            }
            else if(num[i]==4&&times[i]==2)
            {
                ch[i]='h';
            }
            else if(num[i]==4&&times[i]==3)
            {
                ch[i]='i';
            }
            else if(num[i]==5&&times[i]==1)
            {
                ch[i]='j';
            }
            else if(num[i]==5&&times[i]==2)
            {
                ch[i]='k';
            }
            else if(num[i]==5&&times[i]==3)
            {
                ch[i]='l';
            }
            else if(num[i]==6&&times[i]==1)
            {
                ch[i]='m';
            }
            else if(num[i]==6&&times[i]==2)
            {
                ch[i]='n';
            }
            else if(num[i]==6&&times[i]==3)
            {
                ch[i]='o';
            }
            else if(num[i]==0&&times[i]==1)
            {
                ch[i]=' ';
            }
            else if(num[i]==0&&times[i]==2)
            {
                ch[i]='-';
            }

            printf("%c",ch[i]);
        }
        printf("\n");
        }

}
