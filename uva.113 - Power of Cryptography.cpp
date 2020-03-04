#include<bits/stdc++.h>
using namespace std;
int main()
{
 double numn,nump,numk,i;
    while(scanf("%lf%lf",&numn,&nump)!=EOF)
    {
        i=1/numn;
        numk=pow(nump,i);
        printf("%.0lf\n",numk);
    }
}

