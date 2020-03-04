#include<bits/stdc++.h>
using namespace std;
int main()
{
    char sam[37];
    int i,j, len,sum = 0,num= 0,l,a=0,k,flag,arr[30],m;
    while(scanf("%d",&num)!= EOF)
    {
        a++;
        sum = 0;

        getchar();
        for(k=0; k<num; k++)
        {

	memset(arr, 0, sizeof(arr));

            gets(sam);
            len = strlen(sam);
            for(m=0; m<len; m++)
            {
                j=sam[m]-'a';
                arr[j]++;
            }
            l = 0;
            if(len==1)
            {
                l=1;
            }
            for(i=0; i<25; i++)
            {
                for(j=i+1; j<26; j++)
                {
                    if((arr[i]==arr[j])&&(arr[i]!=0))
                    {
                        l= 1;
                        break;

                    }
                }
                if(l==1)
                    break;
            }
            if(l != 1)
            {
                sum ++;
            }

        }
        printf("Case %d: %d\n",a,sum);
    }
}
