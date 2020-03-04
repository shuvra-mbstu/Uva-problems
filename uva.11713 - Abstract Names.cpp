#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,len1,len2;
    char ch1[25],ch2[25],c;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        j=1;
        gets(ch1);
        gets(ch2);
        len1=strlen(ch1);
        len2=strlen(ch2);
        if(len1==len2)
        {
            for(i=0;i<len1;i++)
            {
                if((ch1[i]!='a')&&(ch1[i]!='e')&&(ch1[i]!='i')&&(ch1[i]!='o')&&(ch1[i]!='u'))
                {
                    if(ch1[i]!=ch2[i])
                    {
                        j=0;
                        break;
                    }
                }
            }
            if(j==0)
            {
                printf("No\n");
            }
            else
                printf("Yes\n");
        }

        else
            printf("No\n");

    }
}
