#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[17];
   long long int sum, len, i, j,test,num;
    sum = 0;
    scanf("%d",&test);
    for(j=0; j<test; j++)
    {
        scanf("%s",ch);
            if(strcmp(ch,"report")==0)
                printf("%d\n",sum);
            else
            {
              scanf("%lld",&num);
              sum = sum + num;
            }
    }
    return 0;
}
