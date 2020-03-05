#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num,sum,res,coun;
    char st[7],c;
    scanf("%d",&test);
    getchar();
    //cout<<num;
    for(int i=0;i<test;i++)
    {
       scanf("%c%c%c",&st[0],&st[1],&st[2]);
       getchar();
       scanf("%d%c",&num,&c);
       sum=0;
       sum=(((st[0]-'A')*pow(26,2))+((st[1]-'A')*26)+((st[2]-'A')));
       res=abs(sum-num);
   //   cout<<sum<<" "<<res<<endl;
       if(res<=100)
        printf("nice\n");
       else
        printf("not nice\n");
    }
    return 0;
}
