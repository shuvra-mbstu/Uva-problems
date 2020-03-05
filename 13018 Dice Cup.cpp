#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int num1,num2,coun, i,j,sum,l=0;
    while(scanf("%d%d",&num1,&num2)==2)
    {if(l!=0)
    printf("\n");
        mp.clear();
        coun=0;
        l=1;
        for(i=1;i<=num1;i++)
        {
            for(j=1;j<=num2;j++)
            {
                int k=i+j;
                mp[k]++;
                if(mp[k]>coun)
                {
                    coun=mp[k];
                }
            }
        }
        map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(coun==(*it).second)
            {
                cout<<(*it).first<<endl;
            }
        }
    }
    return 0;
}
