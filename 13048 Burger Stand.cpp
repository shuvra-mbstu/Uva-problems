#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,cas=0, res,i,j,k;
    string str;
    while(scanf("%lld",&num)!=EOF)
    {
        getchar();
      if(num==0)
      {
          break;
      }
      while(num--){
    getline(cin, str);
    int len = str.size();
    res= 0;
    int pos=1;
        for(i=0;i<len;i++)
        {
            pos=1;
            if((str[i]=='B')||(str[i+1]=='B')||(str[i+2]=='B'))
            {
                pos=0;
            }
             if((str[i]=='S')||(str[i+1]=='S')||((i>0)&&(str[i-1]=='S')))
            {
                pos=0;
            }
             if(str[i]=='D')
            {
                pos=0;
            }
           if(pos==1)
           {
               res++;
           }
        }
        printf("Case %lld: %lld\n",++cas,res);
    }
    }
    return 0;
}
