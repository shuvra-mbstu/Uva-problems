#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,test,i,arr[1000],j,sum,num1,numb,number,k;
    char ch[100],as[10];
    scanf("%d",&test);
    while(test--)
    {
        sum = 0;
        num1=2;
        scanf("%d",&num);
        j=0;
        getchar();
        for(i=0; i<num; i++)
        {
            scanf("%s",ch);
            if(ch[0]=='S')
            {
                scanf("%s",as);
                scanf("%d",&numb);
            }
            if(ch[0]=='L')
            {
                arr[i]=-1;
                sum=sum+arr[i];
            }
            else if(ch[0]=='R')
            {
                arr[i]=1;
                sum = sum + arr[i];
            }
            else
            {
                sum = sum + arr[numb-1];
                arr[i]=arr[numb-1];
            }
        }

        printf("%d\n",sum);
    }
    return 0;
}
