#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pr=0,cur,spd=0,hr=0,mn=0,sec=0,dis;
    dis=0;
    char str [100];
    {
        while(scanf("%s",str)!=EOF)
        {
            sscanf(str,"%lf:%lf:%lf",&hr,&mn,&sec);
            cur=(hr*3600)+(mn*60)+sec;
            dis=dis+((cur-pr)*(spd/3600));
            char ch= getchar();
            if(ch==' ')
            {
                scanf("%lf",&spd);
            }
            else if(ch=='\n')
                printf("%s %.2lf km\n",str,dis);
                pr=cur;
        }
    }
    return 0;
}
