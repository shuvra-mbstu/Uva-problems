#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st[10007];
    int test, num, res, coun;
    scanf("%d",&test);
    while(test--)
    {
        res=0;
        scanf("%d",&num);
        for(int i=0;i<num;i++)
        {
            cin>>st[i];
        }
        sort(st,st+num);
        for(int i=0;i<num;i++){
            for(int j=i+1; j<num; j++)
            {
                coun=st[j].find(st[i]);
               if(coun==0)
               {
                   res=1;
                   break;
               }
            }
            if(res==1)
            {
                break;
            }
        }
        if(res==1)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
}
