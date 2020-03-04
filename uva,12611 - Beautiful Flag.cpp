#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, radi, x0,y0,x1,y1,len,wed,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d",&radi);
        len=5*radi;
        wed= 3*radi;
        x0=(.45*len);
        y0=(wed/2);
        x1=(.55*len);
        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",i+1,-x0,y0,x1,y0,x1,-y0,-x0,-y0);
    }
    return 0;
}
