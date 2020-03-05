#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i,j,k,len,l,arr[50],res,n;
    string st;
    scanf("%d",&test);
    getchar();
    while(test--){
    getline(cin,st);
        len=st.size();
        memset(arr,0,sizeof(arr));
        k=0;
        for(i=0;i<len;i++)
        {
            if(((st[i]>='A')&&(st[i]<='Z')))
            {
                j=st[i]-'A';
                arr[j]++;
                if(k<arr[j])
                {
                    k=arr[j];
                }
            }
            else if((st[i]>='a')&&st[i]<='z')
            {
                j=st[i]-'a';
                arr[j]++;
                 if(k<arr[j])
                {
                    k=arr[j];
                }
            }
        }
        //cout<<k<<endl;
        for(i=0;i<26;i++)
        {
            if(arr[i]==k)
            {
                //cout<<arr[i]<<endl;
                printf("%c",(i+97));
            }
        }
        printf("\n");
    }
    return 0;
}
