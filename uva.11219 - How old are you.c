#include<stdio.h>
int main()
{
    int i,cur_day, cur_mon,cur_yr, b_day, b_mon, b_yr,test,day,mon,yr;
    char a, b, c, d;
    scanf("%d",&test);
    for(i=1;i<=test; i++)
    {
    scanf("%d%c%d%c%d\n",&cur_day,&a,&cur_mon,&b,&cur_yr);
    scanf("%d%c%d%c%d\n",&b_day, &c,&b_mon,&d,&b_yr);
    if(cur_day<b_day)
    {
        cur_mon = cur_mon -1;
    }
    if(cur_mon<b_mon)
    {
        cur_yr= cur_yr-1;
    }
    yr =cur_yr -b_yr;
    if(yr<0)
    {
        printf("Case #%d: Invalid birth date\n",i);
    }
    else if(yr>130)
    {
        printf("Case #%d: Check birth date\n",i);
    }
    else if(cur_day==b_day&&cur_mon==b_mon&&cur_yr==b_yr)
    {
        printf("Case #%d: 0\n",i);
    }
    else
    {
        printf("Case #%d: %d\n",i,yr);

    }
}
