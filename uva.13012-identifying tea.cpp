#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int tea, type[8], i,count;
    while(scanf("%d",&tea)!= EOF)
    {
        count = 0;
        for(i=0;i<5;i++)
        {
            scanf("%d",&type[i]);
            if(type[i]==tea)
            {
                count++;
            }
        }
        printf("%d\n",count);

    }
    return 0;
}
