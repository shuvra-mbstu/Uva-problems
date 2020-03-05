#include<bits/stdc++.h>
using namespace std;
#define r 100000
long long int arr1[r],arr2[r],arr[r],k,l,a,num;
void bin(long long int i)
{
    int k=-1;
    while(i!=0)
    {
        arr1[++k]=(i%2);
        //cout<<"arr1"<<arr1[k]<<endl;
        i=i/2;
    }
    a = k;
    return;
}
void bin2(long long int i)
{
    k=-1;
    while(i!=0)
    {
        arr2[++k]=(i%2);
        i=i/2;
        //cout<<"arr2"<<arr2[k]<<endl;
    }
    if(a<k)
    {
        a = k;
    }
    return;
}
int main()
{
    long long int num1,num2,res,cas,i,j;
    while(scanf("%lld%lld",&num1,&num2)!=EOF)
    {
        //cout<<num1<<num2<<endl;
        num=0;
        memset(arr1,0,sizeof(arr1));
        memset(arr2,0,sizeof(arr2));
        memset(arr,0,sizeof(arr));
        bin(num1);
        bin2(num2);

        l=-1;
        for(i=a; i>=0; i--)
        {
            j=arr1[i]+arr2[i];
           // cout<<"arr1"<<arr1[i]<<endl<<"arr2"<<arr2[i]<<endl;
            if(j%2==0)
            {
                arr[++l]=0;
            }
            else
                arr[++l]=1;
                //cout<<arr[i]<<endl;
        }
        j=0;
        res=0;
      // cout<<a<<endl;
        for(i=a; i>=0; i--)
        {
            num= arr[i]*(pow(2,j));
            //cout<<arr[i]<<num<<endl;
            res=res+num;
            j++;
            //cout<<"res"<<res;
        }
    printf("%lld\n",res);
    }
    return 0;
}
