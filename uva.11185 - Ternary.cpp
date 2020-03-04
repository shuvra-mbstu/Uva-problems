#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int number,num[100000];
    int i,j;
    while(scanf("%lld",&number)!=EOF)
    {
        if(number<0)
        {
            break;
        }
        i=0;
        if(number ==0)
        {
            num[0]=0;
            printf("%lld",num[0]);
        }
        while(number !=0)
        {
            num[i]=number%3;
            number=number/3;
            i++;
        }
        for(j=i-1;j>=0;j--)
        {
            printf("%lld",num[j]);
        }
        printf("\n");
    }
}
