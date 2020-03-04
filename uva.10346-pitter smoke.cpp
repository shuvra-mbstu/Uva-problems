#include<bits/stdc++.h>
using namespace std;
int main()
{
int num, coun, i,k,sum;
    while(scanf("%d%d",&num,&k)!= EOF)
    {
        i = 0;
        coun = num;
        sum = 0;
        if(k>1)
        {
            while(num>=k)
            {

                coun = coun + (num /k);
                num = ((num/k)+(num%k));

            }
        }
        printf("%d\n",coun);
    }
    return 0;
}
