

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000],c;
    int test,i,j,k,coun,res[10],len,arr[30];
    scanf("%d",&test);
    while(test--)
    {
        memset(res,0,sizeof(res));
        memset(arr,0,sizeof(arr));
       gets(ch);
        len=strlen(ch);
        for(i=0; i<len; i++)
        {
            j=(ch[i]-'A');
            if(j>=0&&j<=25)
            {
                arr[j]++;
            }
        }
        res[0]=(arr[0]/3);
        res[1]=(arr[12]);
        res[2]=(arr[17]/2);
        res[3]=arr[6];
        res[4]=arr[19];
        res[5]=arr[8];
        sort(res,res+6);
        printf("%d\n",arr[0]);
    }
}
