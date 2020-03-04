#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, test, res;
    scanf("%d",&test);
    while(test--)
    {
        int coun =0;
        scanf("%d",&num);
        res = ((((((num*567)/9)+7492)*235)/47)-498);
        while(coun!=2)
        {
            num = res%10;
            res = res/10;
            coun++;
        }
        if(num<0)
        {
            num= -num;
        }
        printf("%d\n",num);
    }
}
