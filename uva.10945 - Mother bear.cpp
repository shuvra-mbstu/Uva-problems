#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,coun,j,len,sum,arr[2003];
    j++;
    while(getline(cin,s))
    {
        if(s=="DONE")
        {
            break;
        }
        coun=0;
        len=s.size();
        for(i=0,j=1; i<len; i++)
        {
            if(((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z')))
            {
                while((s[len-j]=='.')||(s[len-j]==',')||(s[len-j]=='!')||(s[len-j]=='?')||(s[len-j]==' ')||(s[len-j]=='0'))
                {
                    j++;
                }
                if((s[len-j]-32)==s[i])
                {
                    coun=0;
                    s[len-j]='0';
                    j++;
                }
                else if((s[i]-32)==s[len-j])
                {
                    coun =0;
                    s[len-j]='0';
                    j++;

                }
                else if((s[i]==s[len-j]))
                {
                    coun = 0;
                    s[len-j]='0';
                    j++;

                }
                else
                {
                    coun=1;
                    break;
                }
            }
        }
    if(coun==0)
    {
        printf("You won't be eaten!\n");
    }
    else if(coun==1)
        printf("Uh oh..\n");
}
return 0;
}
