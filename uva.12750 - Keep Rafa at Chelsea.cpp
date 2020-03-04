#include<stdio.h>
using namespace std;
int main()
{
    int test,coun,i=0,j,res,num,k;
    char c[507];
    scanf("%d",&test);
    while(test--)
    {
        i++;
        scanf("%d",&num);
        for(j=0; j<num; j++)
        {
            getchar();
            scanf("%c",&c[j]);

        }
        coun =3;
        for(j=0; j<num-2; j++)
        {
            res=0;
            for(k=j; k<j+3; k++)
            {
                if(c[k]=='W')
                {
                    coun=k+4;
                    j=k;
                    res=1;
                }
            }
            if(res==0)
            {
                break;
            }
        }
        if(coun>=num||num<=3)
            printf("Case %d: Yay! Mighty Rafa persists!\n",i);
        else
            printf("Case %d: %d\n",i,coun);
    }
}
