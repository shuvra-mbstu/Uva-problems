#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10000],ch2[10000];
    int i,j, len,test,sum = 0,num= 0,l,a=0,k,flag,arr[107],m[107],stat,futur;
    char d,c;
    scanf("%d",&test);
       for(i=0;i<test;i++)
       {
           sum =0;
           a=0;
           l=0;
           scanf("%d",&num);
           scanf("%s%s",ch,ch2);
           while(num--)
           {
               arr[l]=ch[l]-'0';
               m[l]=ch2[l]-'0';
               if(m[l]>arr[l]){
                   a=(m[l]-arr[l]);
                   k=(9-m[l])+arr[l]+1;
               }
               else
               {
                  a=(arr[l]-m[l]);
                   k=(9-arr[l])+m[l]+1;
               }
                if(a>k)
               {
                   sum=sum+k;

               }
               else
               {
                   sum=sum+a;

               }
               l++;
           }
           printf("Case %d: %d\n",i+1,sum);
       }
}

