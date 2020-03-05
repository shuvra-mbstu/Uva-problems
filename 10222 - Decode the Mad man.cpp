#include<bits/stdc++.h>
using namespace std;
int main()
{
   string st;
   getline(cin, st);
   int len=st.size();
   for(int i=0;i<len;i++)
   {
       if(st[i]>='A' && st[i]<='Z')
       {
           st[i]=st[i]+32;
       }
           if((st[i]==']'))
            printf("p");
           else if(st[i]=='[')
            printf("o");
            else if(st[i]=='p')
            printf("i");
            else if(st[i]=='o')
            printf("u");
            else if(st[i]=='i')
            printf("y");
            else if(st[i]=='u')
            printf("t");
            else if(st[i]=='y')
            printf("r");
            else if(st[i]=='t')
            printf("e");
            else if(st[i]=='r')
            printf("w");
            else if(st[i]=='e')
            printf("q");
            else if(st[i]==92)
            printf(";");
            else if(st[i]==39)
            printf("l");
            else if(st[i]==';')
            printf("k");
            else if(st[i]=='l')
            printf("j");
            else if(st[i]=='k')
            printf("h");
            else if(st[i]=='j')
            printf("g");
            else if(st[i]=='h')
            printf("f");
            else if(st[i]=='g')
            printf("d");
            else if(st[i]=='f')
            printf("s");
            else if(st[i]=='d')
            printf("a");
            else if(st[i]=='/')
            printf(",");
            else if(st[i]=='.')
            printf("m");
            else if(st[i]==',')
            printf("n");
            else if(st[i]=='m')
            printf("b");
            else if(st[i]=='n')
            printf("v");
            else if(st[i]=='b')
            printf("c");
            else if(st[i]=='v')
            printf("x");
            else if(st[i]=='c')
            printf("z");
            else
                printf("%c",st[i]);
   }
   printf("\n");
}
