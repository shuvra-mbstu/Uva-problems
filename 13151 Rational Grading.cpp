#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,chr;
    int num, test,div,i,res,k,nnum,cas=0,sum;
    while(cin>>st){
          scanf("%d",&num);
          cas=0;
          sum=1;
          if((st=="0")&&(num==0))
            break;
        //cout<<st<<endl;
            int len = st.size();
            if((st[0]=='0')&&(st[1]=='x'))
            {
                i=2;
                div=16;
            }
            else if(st[0]=='0')
              {
             i=1;
             div=8;
              }
            else {
                    div=10;
            i=0;
            }
            res=0;
         //   cout<<i<<endl;
            int coun=0;
    for(int j=len-1;j>=i;j--)
    {
        if(st[j]=='A')
            k=10;
        else if(st[j]=='B')
            k=11;
        else if(st[j]=='C')
            k=12;
            else if(st[j]=='D')
            k=13;
            else if(st[j]=='E')
            k=14;
            else if(st[j]=='F')
            k=15;
            else
                k=(st[j]-'0');
              //  cout<<(k*pow(div,coun))<<endl;
         res=res+(k*sum);
            sum=div*sum;
         //cout<<res<<endl;
         //coun++;
        // cout<<res<<endl;
    }
    //cout<<res<<endl<<st<<endl;
    for(i=0;i<num;i++)
    {
        cin>>chr>>nnum;
        int len = chr.size();
        if(len==1)
        {
            if(res==nnum)
                cas++;
                res=nnum;
       //                             cout<<cas<<"cas :"<<endl;
        }
        else if(chr[0]=='+')
        {
            res++;
            if(res==nnum)
                cas++;
          //  cout<<res<<" " <<chr<<endl;
                        res=nnum;
             //                   cout<<cas<<"cas :"<<endl;

        }
        else if(chr[0]=='-')
        {
            res--;
            if(res==nnum)
                cas++;
                //            cout<<res<<" " <<chr<<endl;
            res=nnum;
                   //             cout<<cas<<"cas :"<<endl;

        }
        else if((chr[0]=='i')&&(chr[1]=='+'))
                {
                      //             cout<<res<<" " <<chr<<endl;

                    if(res==nnum)
                   {
                       cas++;
                       res++;
                            //       cout<<res<<" " <<chr<<endl;
                    //cout<<cas<<"cas :"<<endl;
                   }
                   else
                   {
                       res=nnum;
                       res++;
                       //        cout<<res<<" " <<chr<<endl;
                }
                }
                 else if((chr[0]=='i')&&(chr[1]=='-'))
                {
                    if(res==nnum)
                   {
                       cas++;
                       res--;
                             //      cout<<res<<" " <<chr<<endl;
                          //             cout<<cas<<"cas :"<<endl;

                   }
                   else
                   {
                       res=nnum;
                             //  cout<<res<<" " <<chr<<endl;
                        res--;
                   }
                }
    }
    cout<<cas<<endl;
    }
    return 0;
}
