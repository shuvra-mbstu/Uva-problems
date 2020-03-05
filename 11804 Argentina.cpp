#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string st[50],ss,res[50];
    int test, num, sum, coun,attck[15],defend[15],cas=0;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        for(int j=0;j<10;j++){
        cin>>st[j];
        scanf("%d%d",&attck[j],&defend[j]);
       // cout<<st[j]<<attck[j]<<defend[j]<<endl;
    }
    for(int j=0;i<9;j++)
    {
        for(int k=j+1;k<10;k++)
        {
            if(attck[j]<attck[k])
            {
                int temp=attck[k];
                attck[k]=attck[j];
                attck[j]= temp;
                ss=st[j];
                st[j]=st[k];
                st[k]=ss;
                temp=defend[k];
                defend[k]=defend[j];
                defend[j]=temp;
                       cout<<st[j]<<attck[j]<<defend[j]<<endl;

            }
            else if((attck[j]==attck[k]) && (defend[j]<defend[k]))
            {
                 int temp=attck[k];
                attck[k]=attck[j];
                attck[j]= temp;
                ss=st[j];
                st[j]=st[k];
                st[k]=ss;
                temp=defend[k];
                defend[k]=defend[j];
                defend[j]=temp;
                cout<<st[j]<<attck[j]<<defend[j]<<endl;

            }
            else if((attck[j]==attck[k]) && (defend[j]==defend[k]) && (((st[j]>st[k]))))
            {
                 int temp=attck[k];
                attck[k]=attck[j];
                attck[j]= temp;
                ss=st[j];
                st[j]=st[k];
                st[k]=ss;
                temp=defend[k];
                defend[k]=defend[j];
                defend[j]=temp;
                cout<<st[j]<<attck[j]<<defend[j]<<endl;

            }
        }
    }


    printf("Case %d:\n(");
    for(int j=0;j<10;j++)
    {
       /* if(j<4)
            cout<<res[i][j]<<", ";
        else if(j==4)
            cout<<res[i][j]<<")\n(";
       else if(j==9)
            cout<<st[i][j]<<")\n ";
        else
            cout<<st[i][j]<<", ";
            */
            cout<<st[j]<<endl;
    }
}
}
