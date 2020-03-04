#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,tk,res,i=0;
    double tax;
    scanf("%lld",&test);
    while(test--)
    {
        i++;
        scanf("%lld",&tk);
        {
         if((tk>0)&&(tk<=180000))
        {
            tax = 0;
        }
       else if((tk>180000)&&(tk<=480000))
        {
            tk = (tk-180000);
            tax = 0.1*tk;

        }
        else if((tk>480000)&&(tk<=880000))
        {
            tax =(( 0.1*300000)+(.15*(tk-480000)));

        }
        else if((tk>880000)&&(tk<=1180000))
        {
            tax = ((0.1*300000)+(.15*400000)+(.2*(tk-880000)));

        }
        else if(tk>1180000)
        {
            tax = ((0.1*300000)+(.15*400000)+(.2*300000)+(.25*(tk-1180000)));
        }
    }
    if(tax>0&&tax<2000)
        {
            tax=2000;
        }

    res = tax;
     if(tax != res)
            {
            res++;
            }

        printf("Case %lld: %lld\n",i,res);

    }
}
