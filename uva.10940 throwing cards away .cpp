#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num, i,j,k,res;
    deque<int>q;
    while(scanf("%d",&num)!=EOF)
    {
        if(num==0)
        {
            break;
        }

        k=2;
        while(k<=num)
        {
            q.push_back(k);
            // cout<<k<<endl;
            k+=2;
        }
        while(!q.empty())
        {
            if(q.size()==1)
            {
                res=q.front();
                q.pop_front();
                //   cout<<res<<endl;
                break;
            }
            if(num%2==0)
            {
                q.pop_front();
                j=q.front();
                //cout<<j<<endl;
                q.pop_front();
                q.push_back(j);
            }
            else
            {
                j=q.front();
                //cout<<j<<endl;
                q.pop_front();
                q.push_back(j);
                q.pop_front();

            }
        }
        printf("%d\n",res);
    }
    return 0;
}
