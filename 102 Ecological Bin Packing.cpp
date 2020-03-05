#include<bits/stdc++.h>
#define mx 10000000
using namespace std;
int main()
{
    long long int arr1b,arr1g,arr1c, arr2b,arr2g,arr2c, arr3b, arr3g, arr3c,coun;
    string st;
    while(scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld",&arr1b,&arr1g,&arr1c,&arr2b,&arr2g,&arr2c,&arr3b,&arr3g,&arr3c)!=EOF)
    {
        //coun = mx;
      long long  int BCG = (arr2b+arr3b)+(arr1c+arr3c)+(arr1g+arr2g);
            coun=BCG;
            st="BCG";
      long long  int BGC = (arr2b+arr3b)+(arr1g   +arr3g)+(arr1c+arr2c);
          if(coun>BGC)
        {
            coun=BGC;
            st="BGC";
        }
     long long   int CBG = (arr2c+arr3c)+(arr1b+arr3b)+(arr1g+arr2g);
         if(coun>CBG)
        {
            coun=CBG;
            st="CBG";
        }
      long long  int CGB = (arr2c+arr3c)+(arr1g+arr3g)+(arr1b+arr2b);
          if(coun>CGB)
        {
            coun=CGB;
            st="CGB";
        }
      long long  int GBC = (arr2g+arr3g)+(arr1b+arr3b)+(arr1c+arr2c);
          if(coun>GBC )
        {
            coun=GBC;
            st="GBC";
        }
      long long  int GCB = (arr2g+arr3g)+(arr1c+arr3c)+(arr1b+arr2b);
          if(coun>GCB)
        {
            coun=GCB;
            st="GCB";
        }
        cout<<st<<" "<<coun<<endl;
    }
    return 0;
}
