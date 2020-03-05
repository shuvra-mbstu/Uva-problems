#include<bits/stdc++.h>
using namespace std;
#define mx 2000000007
#define pb push_back
map<long long int,int> vis;
int arr[]={2,3,5,7};
vector<long long int> ugly;
void fun(long long int v)
{
    if(v>mx)
        return;
    if(vis[v]!=1){
        vis[v]=1;
        ugly.pb(v);
        for(int i=0;i<4;i++)
        {
            fun(v*arr[i]);
        }
}
}
int main()
{
    long long int num;
    fun(1);
//    memset(vis,false,sizeof(vis));
    sort(ugly.begin(),ugly.end());
    //cout<<ugly.size();
    while(scanf("%lld",&num)!=EOF){
            if(num==0)
            break;
            printf("The %lld",num);
    if(((num%100)==11)||((num%100)==12)||((num%100)==13)){
        printf("th");
    }
    else if(num%10 == 1)
        printf("st");
    else if( num%10 == 2)
        printf("nd");
    else if (num%10 ==3)
        printf("rd");
    else
        printf("th");
    printf(" humble number is ");
        cout<<ugly[num-1]<<"."<<endl;
}
}
