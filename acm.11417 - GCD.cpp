#include<bits/stdc++.h>
using namespace std;
int GCD(int b, int a )
{
    int t;
    while(b!=0)
    {
        t=b;
        b = a%b;
        a=t;
    }
    return a;
}
int main()

{
    int a, b, i, j, g, num;
    while(scanf("%d",&num)==1)
    {   g = 0;
        if(num == 0)
          break;
        for(i=1; i<num; i++)
        {
            for(j=i+1; j<=num; j++)
            {
                g += GCD(i,j);
            }
        }
        printf("%d\n",g);
    }
}
