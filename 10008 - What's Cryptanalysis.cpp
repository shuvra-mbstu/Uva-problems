#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, i,l, j, k, sum, coun,arr[30],res[50],r2[30];
    char c;
    string st;
    scanf("%d",&test);
    getchar();
    memset(arr,0,sizeof(arr));
    memset(r2,0,sizeof(r2));
    while(test--)
    {
        getline(cin,st);
        k=st.size();
        for(i=0; i<k; i++)
        {
            if((st[i]>='a')&&(st[i]<='z'))
            {
                st[i]=st[i]-32;
            }
            if((st[i]>='A')&&(st[i]<='Z'))
            {
                int num = st[i]-'A';
                arr[(num)]++;
                r2[num]++;
                //cout<<num<<arr[num]<<endl;
            }
        }
    }
         l=-1;
        for(i=0; i<26; i++)
        {
            if(r2[i]>0)
            {
               // cout<<"i : "<<i<<endl;
               // printf("%c\n",i+'A');
               // cout<<"arr"<<arr[i]<<endl;
                res[++l]=r2[i];
                for(int a=0;a<26;a++)
                {
                    if(arr[i]==arr[a]){
                        r2[a]=0;
                }
                }
            //cout<<"res"<<res[l]<<endl;
            //cout<<"l"<<l<<endl;
            }
        }
    sort(res,res+l+1);
    //l=res[l-1];
    for(j=l; j>=0; j--)
    {
       // cout<<j<<" ";
        for(i=0; i<26; i++)
        {
            if(arr[i]==res[j])
                printf("%c %d\n",i+'A',res[j]);
            }
    }
}
