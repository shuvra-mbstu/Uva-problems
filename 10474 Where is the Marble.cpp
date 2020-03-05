#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, quir, i,j,k,cas=0,l,a,b,coun,res,arr[100000];
    while(scanf("%d%d",&num,&quir)!=EOF)
    {
        if((num==0)&&(quir==0))
        {
            break;
        }
        j=num;
        k=quir;
        i=-1;
        for(j=0;j<num;j++)
        {
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+num);
        printf("CASE# %d:\n",++cas);
        for(j=0;j<quir;j++)
        {
            scanf("%d",&l);
            b=1;
            for(a=0;a<num;a++)
            {
                if(arr[a]==l)
                {
                    printf("%d found at %d\n",l,a+1);
                    b=0;
                    break;
                }
            }
            if(b!=0)
            {
                printf("%d not found\n",l);
            }
        }
    }
}
