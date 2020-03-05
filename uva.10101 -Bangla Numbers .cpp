#include<bits/stdc++.h>
using namespace std;
long long int num,res;
void banglanum(long long int num)
{
    if(num>=10000000)
    {
        banglanum(num/10000000);
        cout<<" kuti";
        num = num%10000000;
    }
    if(num>=100000)
    {
        banglanum(num/100000);
        cout<<" lakh";
        num= num%100000;
    }
    if(num>=1000)
    {
        banglanum(num/1000);
        cout<<" hajar";
        num= num%1000;
    }
    if(num>=100)
    {
        banglanum(num/100);
        cout<<" shata";
        num=num%100;
    }
    if(num)
    {
        cout<<" "<< num;
    }
}
int main()
{
   int i=0;
    while(cin>>num)
    {
        i++;
        printf("%4d.",i);
        if(num==0)
        {
            cout<<" 0";
        }
        else
        {
            banglanum(num);
        }
        cout<<endl;

    }
    return 0;
}
