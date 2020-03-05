#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int num,sum=0,temp,k,j,i=1,test,arr[50],a;
   double res;
    scanf("%lld",&test);
    for(i=0; i<test; i++)
    {
        j=-1;
        while(scanf("%lld",&arr[++j])!=EOF){
        if(arr[j]==0)
        {
            break;
        }
        if((j!=0)&&(arr[j-1]<arr[j]))
        {
            for(k=(j-1);k>=0;k--)
            {
                if(arr[k]<arr[k+1])
                {
                    temp = arr[k];
                    arr[k]= arr[k+1];
                    arr[k+1]=temp;
                }
                else
                    break;
            }
        }
        }
        sum = 0;
        a=0;
        for(k=1; k<(j+1); k++)
        {
       // cout<< " arr:"<<arr[k-1]<<endl;
            res = (pow(arr[k-1],k));
           // cout<<"res :" <<res<<endl;
            sum = sum+(2*res);
           // cout<<"sum: "<<sum<<endl;

        if(sum>5000000){
            printf("Too expensive\n");
            a=1;
            break;
        }
        }
        if(a==0)
            printf("%lld\n",sum);
    }
    return 0;
}
