#include<bits/stdc++.h>
using namespace std;
int arr[2007],freq[2007];
int main()
{
    string str;
    int num,i=0,j=0,coun[70],k,l=0,m=0,cas=0,len;
    memset(arr,0,sizeof(arr));
    arr[0]=1;
    arr[1]=1;
    for(i=4; i<2001; i+=2)
    {
        arr[i]=1;
    }
    for(i=3; i<=45; i++)
    {
        if(arr[i]==0)
        {
            for(j=i*i; j<=2000; j+=i)
            {
                arr[j]=1;
            }
        }
    }
    i=0;
    scanf("%d",&num);
    getchar();
    while(num--)
    {
        cas++;
        m=0;
        l=0;
       memset(freq,0,sizeof(freq));
        cin>>str;
        len=str.size();
        for(i = 0; i < len; i++){
            freq[str[i]]++;
        }
        int flag = 1;
        printf("Case %d: ",cas);
        for(i = 48; i < 130; i++){
            if(arr[freq[i]] == 0){
                printf("%c",i);
                flag = 0;
            }
        }

        if(flag==1)
        {
            printf("empty");
        }
        printf("\n");
    }
    return 0;
}

