#include<bits/stdc++.h>
using namespace std;
long long int arr[100007];
int main()
{
   long long int went, bak, num,i,j,k;
    while(scanf("%lld%lld",&went,&bak)!=EOF)
    {
       j=went-bak;
       memset(arr,0,went);
       for(i=1;i<=bak;i++)
       {
         scanf("%lld",&num);
         arr[num]=1;
       }
       k=0;
       for(i=1;i<=went;i++)
       {
           //cout<<i<<endl;
           if(arr[i]==0)
           {
               k++;
               printf("%lld ",i);
           }
           if(k==j)
           {
               break;
           }
       }
       if(j==0)
       {
           printf("*");
       }
       printf("\n");
    }
    return 0;
}
