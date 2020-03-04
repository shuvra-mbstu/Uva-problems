#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int test,number,i,j, len,num,chra[100000];
    char chr[100000];
    double value,sum;
    scanf("%lld",&test);
    for(i=0; i<test; i++)
    {
        sum = 0;
        num = 0;
        if(i==0)
        {
        getchar();
        }
        gets(chr);
        len = strlen(chr);
        for(j=0; j<len; j++)
        {
            chra[j] = chr[j]-48;
            num = num*10+chra[j];
            value = pow(chra[j],len);
            sum = sum +value;
        }
        if(sum == num )
        {
            printf("Armstrong\n");
        }
        else
            printf("Not Armstrong\n");
    }
}
