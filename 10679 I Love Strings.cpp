#include <bits/stdc++.h>
using namespace std;
int w8[1007], objct,price[1007],test, sum, coun, res, persn, prsnw8;
int main ()
{
  string str,st ;
int pos , test,coun;
scanf("%d",&test);
while(test--)
{
    cin>>str;
    scanf("%d",&coun);
    while(coun--)
    {
      //  pos=-1;
        cin>>st;
        res=st.size();
        pos=0;
        for(int i=0; i<res; i++)
        {
            if(st[i]!= str[i])
            {
                pos=-1;
                break;
            }
        }
  //pos = str.find(st);
 if(pos>=0)
    printf("y\n");
 else
    printf("n\n");
    }
}
  return 0;
}
