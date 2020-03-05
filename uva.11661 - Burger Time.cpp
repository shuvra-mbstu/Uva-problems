#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, cound,counr, res,i,j,k;
    string str;
    while(scanf("%lld",&num)!=EOF)
    {
        getchar();
      if(num==0)
      {
          break;
      }
    getline(cin, str);
    res= 10000000;
    cound= res;
    counr=res;
        for(i=0;i<num;i++)
        {
            if(str[i]=='Z')
            {
                res=0;
                break;
            }
            else if(str[i]=='D')
            {
                res=min(counr,res);
                cound=1;
            }
            else if(str[i]=='R')
            {
                res=min(cound,res);
                counr=1;
            }
            else
            {
                cound++;
                counr++;
            }
        }
        printf("%lld\n",res);
    }
    return 0;
}
