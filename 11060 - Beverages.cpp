#include<bits/stdc++.h>
using namespace std;
vector<int>outdeg[2000],res;
int indeg[2000];
int main()
{
    map<string, int>mp;
    map<int,string>mm;
    string st, ss;
    int num1,num2,cas=0;
    while(scanf("%d",&num1)!=EOF)
    {
             //memset(taken, 0, sizeof(taken));
            memset(indeg, 0, sizeof(indeg));
        for(int i=0;i<num1;i++)
        {
            cin>>st;
        mp[st]=i;
        mm[i]=st;
        }
        scanf("%d",&num2);
        for(int i=0;i<num2;i++)
        {
            cin>>st>>ss;
            outdeg[mp[st]].push_back(mp[ss]);
            indeg[mp[ss]]++;
        }
        for(int i=0;i<num1;i++)
        {
            for(int j=0;j<num1;j++)
            {
                if(indeg[j]==0)
                {
                    res.push_back(j);
                    for(int k=0;k!=sizeof(outdeg[j]);k++)
                    {
                        int s=outdeg[j][k];
                        indeg[s]--;
                    }
                }
            }
        }
        printf("Case #%d: Dilbert should drink beverages in this order:",++cas);
        map<int, string>
        for(int i=0;i<num1;i++)
        {
            cout<<" "<<mm[i];
        }
        printf(".\n");
    }
}
