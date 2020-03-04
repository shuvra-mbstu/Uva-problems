#include<stdio.h>
#include<string.h>
int main ()
{
    char ch[500][1000],cha[50],res[500][1000];
    int i, j, test, num[15],k;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%s",ch[j]);
            scanf("%d",&num[j]);
        }
        for(j=0; j<9; j++)
        {
            for(k=j+1; k<10; k++)
            {
                if(num[j]>num[k])
                {
                    int l = num[j];
                    num[j]= num[k];
                    num[k] = l;
                    strcpy(cha,ch[j]);
                    strcpy(ch[j],ch[k]);
                    strcpy(ch[k],cha);
                }
            }
        }
        int count = 0;
        printf("Case #%d\n",i+1);
        for(j=0; j<10; j++)
        {
            if(num[j]==num[9])
            {
                count++;
                strcpy(res[j],ch[j]);
            }
        }
        short(res;res+count);
        for(j=0; j<count; j++)
        {
            printf("%s\n",res[j]);
        }
    }
}
