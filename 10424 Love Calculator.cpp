#include<bits/stdc++.h>
using namespace std;
double fun(int num)
{
    while(num>9)
    {
        int k=num;
        int sum=0;
        while(k!=0)
        {
            int i=k%10;
            sum=sum+i;
            k=k/10;
        }
        num=sum;
    }
    return num;
}
int main()
{
    double res,a,b;
    string st1,st2;
    while(getline(cin,st1))
    {
        getline(cin,st2);
      // cout<<st1<<endl<<st2<<endl;
    int sum1=0,sum2=0;
        for(int i=0; i<st1.size();i++)
        {
            if(st1[i]>='A' && st1[i]<='Z'){
                            sum1=sum1+(st1[i]-64);

            }

           if(st1[i]>='a' && st1[i]<='z'){
                            sum1=sum1+(st1[i]-96);

            }
        }
      //  cout<<sum1<<"#"<<endl;
       a=fun(sum1);
         for(int i=0; i<st2.size(); i++)
        {
            if(st2[i]>='A' && st2[i]<='Z'){
                            sum2=sum2+(st2[i]-64);

            }

           if(st2[i]>='a' && st2[i]<='z'){
                            sum2=sum2+(st2[i]-96);

            }
        }
              //  cout<<sum2<<"@"<<endl;

        b=fun(sum2);
        if(b>=a)
            res=(a/b);
        else
            res=((b/a));
                 //   cout<<a<<"#"<<b<<"@"<<res<<endl;
          res=res*100;
        printf("%.2lf %\n",res);
        st1.clear();
        st2.clear();
    }
    return 0;
}
