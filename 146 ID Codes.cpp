#include<bits/stdc++.h>
using namespace std;
int main()
{
     string st,ss;
     char ch[100];
     int val,res;
     while(scanf("%s",ch)!=EOF)
     {
          if(ch[0]=='#')break;
          int len=strlen(ch);
          if(next_permutation(ch,ch+len))
          {
               cout<<ch<<endl;
          }
          else printf("No Successor\n");
     }
}
