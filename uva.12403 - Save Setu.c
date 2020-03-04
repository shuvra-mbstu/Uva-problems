#include<stdio.h>
#include<string.h>
int main()
{
    char ch[17];
    int sum, len, i, j,test,num;
    sum = 0;
    scanf("%d",&test);
    getchar();
    for(j=0; j<test; j++)
    {
        scanf("%s",ch);
            len = strlen(ch);
            if(len == 6)
                printf("%d\n",sum);
            else
            {
                num = 0;
                for(i=7; i<=len; i++)
                {
                    num = (ch[i]-'48')+num*10;
                    printf("%d",ch[i]);

                }
                printf("%d",num);
                sum = sum +num;
            }
    }
    return 0;
}
