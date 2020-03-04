#include<stdio.h>
int main()
{
    int players,starts,round,i,test,result;
    while(scanf("%d",&test)!= EOF)
    {
    for(i=0; i<test; i++)
    {
        scanf("%d%d%d",&players,&starts,&round);

        result = ((starts+round)%players);
        if(result == 0)
        {
            result = players;
            printf("Case %d: %d\n",i+1,result);
        }
        else
            printf("Case %d: %d\n",i+1,result);
    }
    }
}
