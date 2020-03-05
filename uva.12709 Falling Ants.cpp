#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,test,higt,w8,lend,i,res,higtm;
    while((scanf("%d",&test))&&(test!=0))
    {
        res=0;
        higtm =0;
      /* if(test==0)
        {
            break;
        }*/
        for(i=0;i<test;i++)
        {
        scanf("%d%d%d",&lend,&w8,&higt);
        num= lend*w8*higt;
        if((higtm<higt))
        {
            res=num;
            higtm = higt;

        }
        else if((higtm==higt)&&(res<num))
        {
              res=num;
            higtm = higt;
        }
        }
        printf("%d\n",res);
}
return 0;
}
