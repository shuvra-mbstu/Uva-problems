#include<bits/stdc++.h>
using namespace std;
int main()
{
  int hat,pant,shoes,socks,shirt,res;
  while(scanf("%d%d%d%d%d",&hat,&shirt,&pant,&socks,&shoes)!=EOF)
  {
      if(hat==0&&shirt==0&&pant==0&&socks==0&&shoes==0)
      {
          break;
      }
      res=hat*pant*shirt*socks*socks*shoes*shoes;
      printf("%d\n",res);
  }
  return 0;
}
