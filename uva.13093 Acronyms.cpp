#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st1,st2,ss1,ss2,str1,str2;
    int i=0,j=0;
    while(getline(cin,st1))
    {
        j=0;
        i=0;
        getline(cin,st2);
        stringstream ss1(st1);
        stringstream ss2(st2);
        while((ss1>>str1)&&(ss2>>str2))
        {
            if(str1[i]!=str2[i])
            {
              //  cout<<str1[i]<<endl<<str2[i]<<endl;
                j=1;
            }
        }
        if(j==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
