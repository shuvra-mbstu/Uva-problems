#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, test, sum, flg,cas=0,coun;
    string st[3000];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&num);
        for(int i=0; i<=num; i++)
        {
            cin>>st[i];
        }
                    printf("Case %d:\n",++cas);
        for(int i=0; i<num; i++)
        {
            int len = st[i].size();
            int l= st[num].size();
            if(len==(l)){
            coun=0;
            for(int j=0; j<len; j++)
            {
                if(st[num][j]==st[i][j])
                {
                    coun++;
                }
            }
            if(((coun==l)||(coun==l-1))&&(l>1))
            {
                cout<<st[i]<<endl;
            }
        }
        }
    }
    return 0;
}
