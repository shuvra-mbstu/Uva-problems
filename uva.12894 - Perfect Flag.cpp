#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,leftx,lefty,rightx,righty,cx,cy,centr;
    double len,wed,rati;
    scanf("%d",&test);
    {
        while(test--){
        scanf("%d%d%d%d%d%d%d",&leftx,&lefty,&rightx,&righty,&cx,&cy,&centr);
        len=(rightx-leftx);
        wed=(righty-lefty);
        if(((len*3)==(5*wed))&&((5*centr)==len)&&((len*9)==(cx-leftx)*20)&&(wed==2*(cy-lefty)))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    }
    return 0;
}
