#include<bits/stdc++.h>
using namespace std;
int main ()
{
    unsigned long long int num1,num2, i,j,k,test,coun,carry[10000],mod1[100000]={0},mod2[100000]={0};
    while(scanf("%llu%llu",&num1,&num2)!=EOF)
    {
        int cas =0;
        cas++;
        if(num1==0&&num2==0)
        {
            break;
        }
        coun = 0;
        if(num1<num2)
        {
            i=num1;
            num1 = num2;
            num2=i;
        }
        int l= 0;
        while(num1!=0)
        {
            mod1[l]=num1%10;
            mod2[l]= num2%10;
            num1=num1/10;
            num2= num2/10;
            if(l==0)
            {
                carry[l]=(mod1[l]+mod2[l])/10;
            }
            else
                carry[l]=((mod1[l]+mod2[l]+carry[l-1])/10);
            if(carry[l]!=0)
            {
                coun++;
            }
            l++;
        }
            if(coun>0)
            {
                if(coun>1)
                    printf("%llu carry operations.\n",coun);
                else
                    printf("1 carry operation.\n");
            }
            else
                printf("No carry operation.\n");
        }
        return 0;
    }
