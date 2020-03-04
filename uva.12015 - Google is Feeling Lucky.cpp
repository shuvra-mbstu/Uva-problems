#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char ch[100][100];
    int i, j, test, num[15],number[15],k,l;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%s",ch[j]);

            scanf("%d",&num[j]);
        }
        for(j=0; j<10; j++)
        {
            number[j] = num[j];
        }
        sort(number,number+10);

        printf("Case #%d:\n",i);

        for(j=0; j<10; j++)
        {
            if(num[j]==number[9])
            {

                printf("%s\n",ch[j]);
            }
        }
    }
}
