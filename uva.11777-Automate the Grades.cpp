#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,Term1,Term2,fina,i, Attendance,Class_Test[15],mr,a=0,mrk;

    char sum;
    scanf("%d",&test);
    while(test--)
    {
    a++;
        scanf("%d%d%d%d",&Term1,&Term2,&fina, &Attendance);
        for(i=0; i<3; i++)
        {
            scanf("%d", &Class_Test[i]);
        }
        sort(Class_Test,Class_Test+3);
        mrk = ((Class_Test[1]+Class_Test[2])/2);
        mr=Term1+Term2+fina+ Attendance+mrk;
        if(mr>=90)
        {
            sum = 'A';
        }
        else if(mr>=80&&mr<90)
        {
            sum = 'B';
        }
        else if(mr>=70&&mr<80)
        {
            sum = 'C';
        }
        else if(mr>=60&&mr<70)
        {
            sum = 'D';
        }

        else if(mr<60)
        {
            sum = 'F';
        }
        printf("Case %d: %c\n",a,sum);
    }
}
