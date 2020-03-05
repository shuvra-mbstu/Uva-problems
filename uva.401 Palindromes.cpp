#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int i,j,k,l,coun,a,b,res=0;
   while(getline(cin,st)){
    l=st.size();
    //cout<<l<<endl;
    j=l;
    k=0;
    res=0;
    for(i=0; i<l; i++)
    {
       // cout<<st[i]<<st[--j]<<endl;
        if((st[i]!=st[--j])&&(i<=(l/2)))
        {
            k=1;
        }
        if(st[i]=='0')
        {
            st[i]='O';
        }
                coun= l-i-1;
                //cout<<coun<<endl;
                if((st[i]=='A')&&(st[coun]=='A'))
                {
                    res++;
                }
            else if((st[i]=='E')&&(st[coun]=='3'))
            {
                res++;
            }
            else if((st[i]=='H')&&(st[coun]=='H'))
            {
                res++;
            }
            else if((st[i]=='I')&&(st[coun]=='I'))
            {
                res++;
            }
            else if((st[i]=='L')&&(st[coun]=='J'))
            {
                res++;
            }
             else if((st[i]=='J')&&(st[coun]=='L'))
            {
                res++;
            }
            else if((st[i]=='M')&&(st[coun]=='M'))
            {
                res++;
            }
            else if((st[i]=='O')&&(st[coun]=='O'))
            {
                res++;
            }
            else if((st[i]=='S')&&(st[coun]=='2'))
            {
                res++;
            }
            else if((st[i]=='T')&&(st[coun]=='T'))
            {
                res++;
            }
            else if((st[i]=='U')&&(st[coun]=='U'))
            {
                res++;
            }
            else if((st[i]=='V')&&(st[coun]=='V'))
            {
                res++;
            }
            else if((st[i]=='W')&&(st[coun]=='W'))
            {
                res++;
            }
            else if((st[i]=='X')&&(st[coun]=='X'))
            {
                res++;
            }
            else if((st[i]=='Y')&&(st[coun]=='Y'))
            {
                res++;
            }
            else if((st[i]=='Z')&&(st[coun]=='5'))
            {
                res++;
            }
             else if((st[i]=='1')&&(st[coun]=='1'))
            {
                res++;
            } else if((st[i]=='2')&&(st[coun]=='S'))
            {
                res++;
            }
             else if((st[i]=='3')&&(st[coun]=='E'))
            {
                res++;
            }
             else if((st[i]=='5')&&(st[coun]=='Z'))
            {
                res++;
            }
             else if((st[i]=='8')&&(st[coun]=='8'))
            {
                res++;
            }
         //   cout<<st[i]<<st[coun]<<res<<endl;
        }
        //cout<<l;
        for(i=0;i<l;i++)
        {
            if((st[i]>='A')&&(st[i]<='Z'))
            {
                printf("%c",st[i]);
            }
            else if(((st[i]>='1')&&(st[i]<='9')))
            {
                printf("%c",st[i]);
               // cout<<st[i];
            }
        }
        if((k==1)&&(res!=l))
        {
          //  cout<<st;
            printf(" -- is not a palindrome.\n");
        }
        else if((k!=1)&&(res!=l))
        {
            //cout<<st;
            printf(" -- is a regular palindrome.\n");
        }
        else if((k==1)&&(res==l))
        {
            //cout<<st;
            printf(" -- is a mirrored string.\n");
        }
        else if((k!=1)&&(res==l))
            {
               // cout<<st;
                printf(" -- is a mirrored palindrome.\n");
            }
            printf("\n");
    }
    return 0;
}
