#include<stdio.h>
int main()
{
    int test,Term1,Term2,fina, Attendance,Class_Test[5],mr,a=0;

    char sum;
    while(scanf("%d",&test)!= EOF)
    {
         while(test--){
                a++;
        scanf("%d%d%d%d%d%d%",&Term1,&Term2,&fina, &Attendance,
              for(i=0;i<3;i++)\
              {
             scanf("%d%d%d", &Class_Test1[i]);
              }
             sort(Class_test,Class_Test+3);
            mr = ((Class_Test[0]+Class_Test[1])/2);
        mr=Term1+Term2+fina+ Attendance+mr;
        if(mr>=90)
        {
            sum = 'A';
        }
        else if(mr>=80&&mr<90)
        {
            sum = 'B';
        }
        else  if(mr>=70&&mr<80)
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
}
