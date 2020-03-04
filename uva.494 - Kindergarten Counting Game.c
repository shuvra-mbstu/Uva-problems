#include<stdio.h>
#include<string.h>
int main()
{
    char ch[700000];
   int i, j,count =0;
    while(gets(ch))
    {
        count = 0;
        j = strlen(ch);
        for(i=0; i<j; i++)
        {
            if(((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))&&((ch[i+1]<'a'||ch[i+1]>'z')&&(ch[i+1]<'A'||ch[i+1]>'Z')))
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}
