#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, res,i,j,k;
    long long int arr[10]= { 2, 3, 5, 7, 13, 17, 19, 31};
    long long int arr2[15]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    while(scanf("%lld",&num)!=EOF)
    {
        if(num==0)
        {
            break;
        }
        k=1;
        for(i=0; i<11; i++)
        {
            if((i<8)&&(num==arr[i]))
            {
                j=pow(2,num);
                res=(j/2)*(j-1);
                printf("Perfect: %lld!\n",res);
                k=0;
                break;
            }
            else if(num==arr2[i])
            {
                k=0;
                printf("Given number is prime. But, NO perfect number is available.\n");
                break;
            }
        }
        if(k!=0)
        {
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }
    return 0;
}
