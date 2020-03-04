#include<bits/stdc++.h>
using namespace std;
long long int num1, num2;
int main()
{
    int i=0,j=92;
    double res1,res2;
    while(scanf("%lld%lld",&num1,&num2)!=EOF)
    {
        i++;
        if(num1==0&&num2==0)
        {
            break;
        }
        else if(num1==0||(num1-1)==0)
        {
            printf("Case %d: :-\\\n",i);
            continue;
        }
       res1=((double)num2/(double)num1);
       if(res1>1)
       {
           res1=1;
       }
        res2=((double)(num2-1)/(double)(num1-1));
       if(res2>1)
       {
           res2=1;
       }
       if(res1>res2)
        printf("Case %d: :-(\n",i);
       else if(res1<res2)
       printf("Case %d: :-)\n",i);
       else if(res1==res2)
        printf("Case %d: :-|\n",i);
        else
        {
        printf("Case %d: :-\\\n",i);
        }
    }
    return 0;
}
