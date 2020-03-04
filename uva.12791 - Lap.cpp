#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,i,j,k,num,numb;
    while(scanf("%d%d",&num1,&num2)!= EOF)
    {
        j=2;
        i=2;
        num =num1;
        numb=num2;
        while(numb>num)
        {
            num=i*num1;
            if(num>numb)
            {
                numb = j*num2;
                j++;
            }
            else
            {
                break;
            }
            i++;
        }
        printf("%d\n",i);
    }
}
