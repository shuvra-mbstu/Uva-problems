#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num1, num2, d, i, f,num,j=1,coun;

    while(scanf("%lld %lld",&num1, &num2)==2)
    {
        if(num1<0&&num2<0)
        {
            break;
        }
        f = 0;
            i=1;
            coun=0;
            d = num1;
            while(d!=1)
            {
                if(d %2 != 0)
                {
                    d = d*3+1;
                    if(d>num2)
                {
                    break;
                }
                }
                else
                {
                    d = d/2;
                }
                i++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,num1, num2,i );
        j++;
    }
}

