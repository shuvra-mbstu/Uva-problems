#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st1[101],st2[101],ss;
    int num,test,cas,i=-1;
    scanf("%d",&test);
    getchar();
    for(int j=0;j<test;j++)
    {
        getline(cin,st1[j]);
        getline(cin,st2[j]);
     //   cout<<st1[j]<<" "<<st2[j]<<endl;
    }
    scanf("%d",&num);
     getchar();
    while(num--)
    {
        getline(cin,ss);
        for(i=0;i<test;i++)
        {
            if(ss==st1[i]){
                cout<<st2[i]<<endl;
                break;
            }
        }
      //  cout<<endl;
    }
    return 0;
}
