#include<stdio.h>
int main()
{
   long long int num, test=0,sum=1,i;
   while(scanf("%lld",&num)==1){
        if(num<0)
        break;
        sum=1;
    for(i=1;i<=num;i++)
    {
        sum = i+sum;
    }
    printf("%lld\n",sum);
   }
}
