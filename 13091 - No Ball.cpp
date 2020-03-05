#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, l, m, n, sum, res=0, coun, cas=1,arr[10][10],test;
    string st[100], cha,c;
    scanf("%d",&test);
    while(test--){
            res = 0;
          //  getchar();
    for(i=0;i<5;i++)
    {
                cin>>st[i];
        for(j=0;j<5;j++)
        {
           // scanf("%s",&st[i][j]);
          //  printf("%c",arr[i][j]);
          //  getchar();
        if( (st[i][j]=='<')||(st[i][j]=='>') )
       {
           c=st[i][j];
          //cout<<c<<"habijabi"<<endl;
           m=i;
           n=j;
       }
        }
      //  cout<<endl;
    }
    if(c=="<")
        {
            for(i=n+1;i<=4;i++)
            {
               // printf("%c\n",st[m][i]);
                if(st[m][i]=='|')
                {
                    res=1;
                    //                    cout<<res<<endl;
                }
            }
        }
        else if(c==">")
        {
            for(i=0;i<n;i++)
            {
              //  printf("%c\n",st[m][i]);
                if(st[m][i]=='|')
                {
                    res=1;
                    //cout<<res<<endl;
                }
            }
        }
        if(res==0)
        {
            printf("Case %d: Thik Ball\n",cas++);
        }
        else
            printf("Case %d: No Ball\n",cas++);
}
return 0;
}
/*
3
..|..
..|>.
..|..
..|..
..|..
..|..
.>|..
..|..
..|..
..|..
.|...
.|...
.|...
.|.>.
.|...
*/
