#include<bits/stdc++.h>
using namespace std;
unsigned long long int num;
int main()
{
    unsigned long long int num,i,j,k,coun=1,arr[9000],l=0;
    memset(arr,0,sizeof(arr));
    for(i=4; i<9000; i=i+2)
    {
        arr[i]=1;
    }
    for(i=3; i<=9000; i++)
    {
        if(arr[i]==0)
        {
            for(j=i+i; j<=9000; j=j+i)
            {
                arr[j]=1;
            }
        }
    }
    j=1;
    while(coun!=1500)
    {
        j++;
        if(((j%2==0)||(j%3)==0||(j%5)==0))
        {
            k=sqrt(j);
            for(i=7; i<=k; i++)
            {
                if(arr[i]==0&&((j%i)==0))
                {
                    l=1;
                    break;
                }
            }
            if(l==0)
            {
                coun++;
                printf("%llu\t",j);
                if(coun==1500)
                {
                    num=j;
                    printf("The 1500'th ugly number is %llu.\n",num);

                    break;
                }
            }
        }
    }
}
// not acpted code
