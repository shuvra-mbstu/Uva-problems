#include<bits/stdc++.h>
using namespace std;
int prime[1000007];
void fun()
{
    prime[1]=1;
    prime[0]=1;
    for(int i=2; i<=1000; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=1000007; j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
int main()
{
    memset(prime,0,sizeof(prime));
    fun();
    int num,coun=0,cas=0;
    while(scanf("%d",&num)!=EOF)
    {
         if(num==0)break;
          //cout<<prime[num]<<endl;
         coun=0;
         int val=sqrt(num);

         if(prime[num]==0)coun++;

         for(int i=2;i<=val;i++)
         {
              if(prime[i]==0 && ((num%i)==0))
              {
                   coun++;
              }
                   int a=num/i;
                   if((num%a)==0 && (a!=i) && (prime[a]==0))
                   {
                        coun++;
                   }
         }
         printf("%d : %d\n",num,coun);
    }
}
