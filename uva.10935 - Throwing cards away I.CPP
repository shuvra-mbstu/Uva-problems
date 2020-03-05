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

        k=1;
        while(k<=num)
        {
            q.push_back(k);
            k+=1;
        }
        printf("Discarded cards:");
        while(!q.empty())
        {
            if(q.size()==1)
            {
                res=q.front();
                q.pop_front();
                break;
            }
                j=q.front();
                printf(" %d",j);
                if(q.size()>2)
                {
                    printf(",");
                }
              q.pop_front();
                j=q.front();
                q.pop_front();
                q.push_back(j);
            }
        printf("\nRemaining card: %d\n",res);
    }
    return 0;
}
