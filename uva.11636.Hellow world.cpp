#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,j,coun,c=0;
    while(scanf("%d",&num)!=EOF)
    {
        c++;
        i=1;
        if(num<0)
        {
            break;
        }
        coun=0;
        while(i!=num)
        {
            coun++;
            if((num-i)>=(i))
            {
                i=2*i;
            }
            else if((num-i)<i)
            {
                j=i;
                while((num-i)!=j)
                {
                    j--;
                }
                i=i+j;
            }
        }
        printf("Case %d: %d\n",c,coun);
    }
}
