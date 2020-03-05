#include<bits/stdc++.h>
using namespace std;
int main()
{
    char sam[30];
    int i,j, len,sum = 0,num= 0,l,a=0,k,flag,arr[30],m;
    while(scanf("%d",&num)!= EOF)
    {
        a++;
        sum = 0;
        for(k=0; k<num; k++)
        {
            getchar();
            sam[30]=0;
            arr[30]=0;
            gets(sam);
            puts(sam);
            len = strlen(sam);
             for(m=0; m<len; m++)
            {
               j=sam[m]-'a';
                arr[j]++;
            }
            l = 0;

            for(i=0; i<25; i++)
            {
                for(j=i+1; j<26; j++)
                {
                    if(arr[i]==arr[j])
                    {
                        l= 1;
                        break;
                    }
                }
                        if(l==1)
                            break;
                    }
                if(flag != 1)
                {
                    sum ++;
                }
        }
        printf("Case %d: %d\n",a,sum);
    }
}
