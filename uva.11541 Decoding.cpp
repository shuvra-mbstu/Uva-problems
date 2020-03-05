#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,i,j,res,test,cas=0;
    char ch;
    scanf("%d",&test);
    getchar();
    for(i=0;i<test;i++)
    {
        j=0;
        while(scanf("%c",&ch)!=EOF)
        {
            if(ch=='\n')
            {
                break;
            }
            scanf("%d",&num);
            if(j==0){
            printf("Case %d: ",++cas);
            j=1;
            }
            if(ch>='A'&&ch<='Z'){
            while(num--)
            {
                printf("%c",ch);
            }
        }
        }
        printf("\n");
    }
    return 0;
}
