#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,num[10],i,j,k;
    scanf("%lld",&test);
    for(i=0; i<test; i++)
    {
        scanf("%lld%lld%lld%lld",&num[0],&num[1],&num[2],&num[3]);
        sort(num,num+4);
        if(num[0]==num[1]&&num[1]==num[2]&&num[3]==num[0])
        {
            printf("square\n");
        }
        else if(((num[0]==num[1])&&(num[2]==num[3]))||((num[0]==num[2])&&(num[1]==num[3]))||((num[0]==num[3])&&(num[2]==num[1])))
        {
            printf("rectangle\n");
        }
        else if(num[3]<(num[0]+num[1]+num[2]))
        {
            printf("quadrangle\n");
        }
        else
            printf("banana\n");
    }
    return 0;
    }
