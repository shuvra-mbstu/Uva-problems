#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,j,n,k;
    char str[1000];
    while(gets(str))
    {
        len=strlen(str);
        n=-1;

        for(i=0; i<len; i++)
        {
            if(str[i]==' ')

            {
                for(j=i-1; j>n; j--)
                    printf("%c",str[j]);
                printf(" ");
                n=i;
            }
        }

        for(i=len-1; i>n; i--)
            printf("%c",str[i]);
        printf("\n");
    }
    return 0;
}
