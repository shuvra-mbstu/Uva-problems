#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day[1009],mon[1009],yr[1009],i,j,k,num,l;
    char name[1001][1001],fr[2000];
    while(scanf("%d",&num)!= EOF)
    {
        for(i=0; i<num; i++)
        {
            scanf("%s",name[i]);
            scanf("%d%d%d",&day[i],&mon[i],&yr[i]);
        }
        for(i=0; i<num-1; i++)
        {
            for(j=i+1; j<num; j++)
            {
                if(yr[i]>yr[j])
                {
                    strcpy(fr,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],fr);
                    l = yr[i];
                    yr[i]=yr[j];
                    yr[j]= l;
                    l=mon[i];
                    mon[i]= mon[j];
                    mon[j]=l;
                    l=day[i];
                    day[i]=day[j];
                    day[j]=l;
                }
                else if(yr[i]==yr[j])
                {

                    if(mon[i]>mon[j])
                    {
                        strcpy(fr,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],fr);
                    l = yr[i];
                    yr[i]=yr[j];
                    yr[j]= l;
                    l=mon[i];
                    mon[i]= mon[j];
                    mon[j]=l;
                    l=day[i];
                    day[i]=day[j];
                    day[j]=l;
                    }
                    else if(mon[i]==mon[j])
                    {
                        if(day[i]>day[j])
                        {
                            strcpy(fr,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],fr);
                    l = yr[i];
                    yr[i]=yr[j];
                    yr[j]= l;
                    l=mon[i];
                    mon[i]= mon[j];
                    mon[j]=l;
                    l=day[i];
                    day[i]=day[j];
                    day[j]=l;
                        }
                    }
                }
            }
        }
        printf("%s\n%s\n",name[num-1],name[0]);
    }
}
