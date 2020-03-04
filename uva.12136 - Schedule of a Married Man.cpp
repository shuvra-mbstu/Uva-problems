#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,num3,num4,num5,num6,num7,num8,res,test,i=0,j;
    char ch;
    scanf("%d",&test);
    while(test--)
    {
      i++;
      scanf("%d%c%d",&num1,&ch,&num2);
      scanf("%d%c%d",&num3,&ch,&num4);
      scanf("%d%c%d",&num5,&ch,&num6);
      scanf("%d%c%d",&num7,&ch,&num8);
      num1=num1*60+num2;
      num3=num3*60+num4;
      num5=num5*60+num6;
      num7=num7*60+num8;
      if((num1>num5&&num1>num7)||(num3<num5&&num3<num7))
            printf("Case %d: Hits Meeting\n",i);
      else
        printf("Case %d: Mrs Meeting\n",i);

    }
}
