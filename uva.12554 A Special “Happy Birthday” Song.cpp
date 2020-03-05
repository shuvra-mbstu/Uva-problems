#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[103],st[17]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you","\0"};
    int num, i=0,j,k,l,m;
    while(cin>>num)
    {
    assert(str.empty());
        k=1;
        j=num;
        while(j--)
        {
            cin>>str[i];
            i++;
        }
        if(num>16)
        {
            while(num>16*k)
            {
                k++;
            }
        }
        j=0;
        l=0;
        m=0;
        while(j<(16*k))
        {
            cout<<str[l]<<": "<<st[m]<<endl;
            l++;
            m++;
            if(l>=num)
            {
                l=0;
            }
            if(m>15)
            {
                m=0;
            }
            j++;
        }

    }
}
