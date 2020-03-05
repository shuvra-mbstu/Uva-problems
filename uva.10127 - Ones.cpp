#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,j,k,sum=0,coun=1,mod;
    while(scanf("%d",&num)!=EOF)
    {
        i=1;
        coun=1;
        mod=(coun%num);
        while(1){
              //  cout<<mod<<endl;
              if(mod==0)
              {
                  break;
              }
            coun=(mod*10)+1;
            i++;
            //cout<<coun<<endl;
            mod=(coun%num);
        }
        cout<<i<<endl;
    }
    return 0;
}
