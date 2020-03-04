#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[100000], party,test,day,i,coun,j;
    scanf("%d",&test);

    while(test--)
    {
        scanf("%d%d",&day,&party);
        coun=0;
        for(i=0; i<party; i++)
        {
            scanf("%d",&num[i]);
        }
        for(i=1; i<=day; i++)
        {
            if((i%7!=6)&&(i%7!=0))
        {
            for(j=0; j<party; j++)
                {
                  if(i%num[j]==0)
                  {
                      coun++;
                      break;
                  }
                }
            }
        }
        printf("%d\n",coun);
    }
}
