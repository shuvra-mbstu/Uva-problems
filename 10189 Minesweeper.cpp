#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st[107];
    int row,colm,cas=0;
    while(scanf("%d%d",&row,&colm)!=EOF)
    {
        if(row==0 && colm==0)
            break;
        getchar();
        for(int i=0; i<row; i++)
        {
            getline(cin,st[i]);
        }
        if(cas!=0)
            printf("\n");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colm; j++)
            {
                if(st[i][j]=='*')
                {
                    if( (st[i][j-1]=='.')&&((j-1>=0)))
                        st[i][j-1]=st[i][j-1]+3;
                    else if((j-1>=0)&&((st[i][j-1]!='*')))
                        st[i][j-1]++;
                    if(((j+1<colm)&&( st[i][j+1]=='.')))
                        st[i][j+1]=st[i][j+1]+3;
                    else if((j+1<colm)&&( st[i][j+1]!='*'))
                        st[i][j+1]++;
                    if( (i-1>=0)&&(st[i-1][j]=='.'))
                        st[i-1][j]=st[i-1][j]+3;
                    else if((i-1>=0)&&(st[i-1][j]!='*'))
                        st[i-1][j]++;
                    if((i+1<row)&& (st[i+1][j]=='.'))
                        st[i+1][j]=st[i+1][j]+3;
                    else if((i+1<row)&&((st[i+1][j]!='*')))
                        st[i+1][j]++;
                    if((i-1>=0)&&(j-1>=0)&& (st[i-1][j-1]=='.'))
                        st[i-1][j-1]=st[i-1][j-1]+3;
                    else if((i-1>=0)&&(j-1>=0)&&(st[i-1][j-1]!='*'))
                        st[i-1][j-1]++;
                    if( (i-1>=0)&&(j+1<colm)&&(st[i-1][j+1]=='.'))
                        st[i-1][j+1]=st[i-1][j+1]+3;
                    else if((i-1>=0)&&(j+1<colm)&&(st[i-1][j+1]!='*'))
                        st[i-1][j+1]++;
                    if((i+1<row)&&(j-1>=0)&&( st[i+1][j-1]=='.'))
                        st[i+1][j-1]=st[i+1][j-1]+3;
                    else if((i+1<row)&&(j-1>=0)&&(st[i+1][j-1]!='*'))
                        st[i+1][j-1]++;
                    if(((i+1<row)&&(j+1<colm)&& (st[i+1][j+1]=='.')))
                        st[i+1][j+1]=st[i+1][j+1]+3;
                    else if((i+1<row)&&(j+1<colm)&&(st[i+1][j+1]!='*'))
                        st[i+1][j+1]++;
                }
        else if(st[i][j]=='.')
            st[i][j]='0';
            }
        }
        printf("Field #%d:\n",++cas);
                // cout<<st[i][j+1];
          for(int i=0; i<row; i++)
        {
            cout<<st[i]<<endl;
            st[i].clear();
    }
}
}
