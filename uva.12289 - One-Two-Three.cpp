#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,len,i,j,coun1,coun2;
    char ch[50],one[10]="one",two[10]="two";
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        gets(ch);
        len=strlen(ch);
        if(len==5)
        {
            printf("3\n");
            continue;
        }
        else if(len>=3)
        {
            coun1=0;
            coun2=0;

            for(i=0; i<len; i++)
            {

                    if(ch[i]==one[i])
                    {
                        coun1++;
                    }
                    if(ch[i]==two[i])
                    {

                        coun2++;
                    }
            }
            if(coun1>=2)
            {
                printf("1\n");
            }
            else
                printf("2\n");
        }
    }
    return 0;
}
