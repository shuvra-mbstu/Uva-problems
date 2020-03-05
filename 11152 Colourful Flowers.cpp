#include<bits/stdc++.h>
//#include<math.h>
#define pi 2*acos(0)
using namespace std;
int main()
{
    double num1,num2,num3,res,coun,bgcircle,smcircle,triangle,re1,re2,re3,k,j,r;
       while(scanf("%lf%lf%lf",&num1,&num2,&num3)==3)
    {
         k=(num1+num2+num3)/2;
    triangle=sqrt(k*(k-num1)*(k-num2)*(k-num3));
    double xx=(num1*num2*num3);
    double yy=sqrt((num1+num2+num3)*(num2+num3-num1)*(num3+num1-num2)*(num1+num2-num3));
        bgcircle=(xx/yy);
        //cout<<xx<<"   "<<yy<<" "<<"  "<<bgcircle<<endl;
   r=(triangle/k);
   //cout<<r<<endl;
        smcircle=(pow(r,2)*pi);
     // cout<<j<<endl;
      //  cout<<bgcircle<<endl;
        re1=(pi*(bgcircle*bgcircle))-triangle;
        //cout<<re1<<endl;
        re2=(triangle-smcircle);
        re3=smcircle;
      printf("%.4lf %.4lf %.4lf\n",re1,re2,re3);
    }
    return 0;
}
