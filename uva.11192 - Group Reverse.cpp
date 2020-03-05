#include <stdio.h>
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int a,i,j,k,l,n;
    while(scanf("%d",&a)==1)
    {

    if(a==0)
    {
        break;
    }
    scanf("%s",s);
    k=strlen(s);
    l=k/a;
    for(i=1;i<=a;i++)
    {

        n=l*i;
       for(j=n-1;j>=n-l;j--)
       {
          printf("%c",s[j]);
       }

    }
     printf("\n");

    }
    return 0;
}
