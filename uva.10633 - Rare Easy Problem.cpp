#include<bits/stdc++.h>
using namespace std;
unsigned long long int num,i,res,j,k,l;
int main()
{
    while(scanf("%llu",&num)!=EOF)
    {
        i=0;
        if(num==0)
        {
            break;
        }
      //  printf("%d",((num*10)/9));
        j=((num*10)/9);
       // res= num/10;
       l=j-1;
       k=l/10;
            if((l-k)==num)
            {
                printf("%llu",l);
           printf(" ");
            }
            printf("%llu\n",j);
        }
        return 0;
}
