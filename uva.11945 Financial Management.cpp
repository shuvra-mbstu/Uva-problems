#include<iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{

int t,i,tc=1,c;
double balance,sum = 0.0,avg=0.0,r;
cin >> t;
while(t--)
{
for(i=0;i<12;i++)
{
cin >> balance;
sum += balance;
avg = sum/12.0;
c = avg/1000.0;
r = fmod(avg,1000.00);
}
if(avg < 999.00)
printf("%d $%.2lf\n",tc,avg);

else
printf("%d $%d,%.2lf\n",tc,c,r);
tc++;

avg = 0;
sum = 0;

}

return 0;
}
