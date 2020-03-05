#include<bits/stdc++.h>
using namespace std;
long long int test,num1,num2,res,i,j,k,arr1[233],S,l;
int main()
{
    scanf("%llu",&test);
    while(test--)
    {
        scanf("%lld%lld",&num1,&num2);
        memset(arr1,0,sizeof(arr1));
        res=0;
        for(i=0; i<num1; i++)
        {
            res=0;
            scanf("%lld",&S);
            for(l=1; l<230; l++)
            {
                k=(l&S);
               // if(l==10)
                //cout<<k<<endl;

                if(k>arr1[l])
                {
                    arr1[l]=k;
                  //  cout<<arr1[10]<<endl;
                }
            }
        }
        for(j=0; j<num2; j++)
        {
            scanf("%lld",&res);
            printf("%lld\n",arr1[res]);
        }
    }
}

