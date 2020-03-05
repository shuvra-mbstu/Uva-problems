#include<bits/stdc++.h>
using namespace std;
int d_bin(int num)
{
    int coun=0;
    while(num!=0)
    {
        int i=num%2;
        if(i==1)
        {
            coun++;
        }
        num=num/2;
    }
    return coun;
}
int h_bin(int num)
{
    int coun=0;
    while(num!=0)
    {
        int i=num%10;
        if((i==1)||(i==2)||(i==4)||(i==8))
        {
            coun++;
        }
        else if((i==3)||(i==5)||(i==6)||(i==9))
        {
            coun=coun+2;
        }
        else if((i==7))
        {
            coun=coun+3;
        }
        num=num/10;
    }
    return coun;
}
int main()
{
    int test,num, sum, coun;
    string st;
    scanf("%d",&test);
    while(test--)
    {
        cin>> num;
      /*  int len =st.size();
        for(int i=0;i<num;i++)
        {

        }
        cout<<num<<endl;*/
        cout<<d_bin(num)<<" "<<h_bin(num)<<endl;
    }
}
