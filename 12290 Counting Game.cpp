#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, m, k, coun,val=0;
    while(scanf("%d%d%d",&num,&m,&k)!=EOF)
    {
        if(num==0 && m==0 && k==0)break;

        coun=0;
        long long int sum=0,res;
        val=0;
        int flg=0;
        while(coun!=k)
        {
            if(flg==0)
            {
                val++;
                if(val==num)flg=1;
            }
            else
            {
                val--;
                if(val==1)flg=0;
            }
            sum++;
            if( (val==m))
            {
                if((sum%7) ==0)coun++;
                else
                {
                    int a=sum,c=0;
                    while(a!=0)
                    {
                        int b=a%10;
                        a=a/10;
                        if(b==7)
                        {
                            coun++;
                            break;
                        }
                    }
                }
                    if(coun==k)
                    {
                        res=sum;
                        break;
                    }
            }
        }
        printf("%lld\n",res);

    }
}
