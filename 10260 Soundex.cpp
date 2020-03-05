#include<bits/stdc++.h>
using namespace std;
int main()
{

    string st, che, ss;
    int coun, sum, len,i,j,k;
    while(cin>>st)
    {
        sum=0;
        len=st.size();
        for(i=0; i<len; i++)
        {
            if(((st[i]=='B')||(st[i]=='F')||(st[i]=='P')||(st[i]=='V'))&&(sum!=1))
            {
                printf("1");
                sum=1;
            }
            else  if(((st[i]=='C')||(st[i]=='G')||(st[i]=='Q')||(st[i]=='S')||(st[i]=='Z')||(st[i]=='X')||(st[i]=='J')||(st[i]=='K'))&&(sum!=2))
            {
                printf("2");
                sum=2;
            }
            else  if(((st[i]=='D')||(st[i]=='T'))&&(sum!=3))
            {
                printf("3");
                sum=3;
            }
            else  if((st[i]=='L')&&(sum!=4))
            {
                printf("4");
                sum=4;
            }
            else if(((st[i]=='M')||(st[i]=='N'))&&(sum!=5))
            {
                printf("5");
                sum=5;
            }
            else  if((st[i]=='R')&&(sum!=6))
            {
                printf("6");
                sum=6;
            }
            else  if(((st[i]=='A')||(st[i]=='E')||(st[i]=='I')||(st[i]=='O')||(st[i]=='U')||(st[i]=='H')||(st[i]=='W')||(st[i]=='Y')))
            {
                sum =0;
            }
        }
            printf("\n");
        }
        return 0;
    }
