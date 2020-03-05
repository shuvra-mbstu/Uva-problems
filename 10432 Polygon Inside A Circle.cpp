#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
 double redious,num,p;
 while(scanf("%lf %lf",&redious,&num)==2){
        p=(redious*redious*num*sin((2*pi)/num)/2);
        printf("%.3lf\n",p);
 }
 return 0;
}
