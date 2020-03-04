#include<bits/stdc++.h>
using namespace std;
unsigned long long int y,x,test;
int main()
{
    int i;
    char c;
    scanf("%llu",&test);
    for(i=0;i<test;i++)
    {
        scanf("%c%llu",&c,&y);
        x=sqrt(y);
        printf("%llu\n\n",x);
    }
}
