#include<stdio.h>

float grad (int mr)
{
    if(mr>=80&&mr<=100)
    {
        return 4;
    }
    else if(mr>=75&&mr<=79)
    {
        return 3.75;
    }
    else  if(mr>=70&&mr<=74)
    {
        return 3.50;
    }
    else if(mr>=65&&mr<=69)
    {
        return 3.25;
    }
    else if(mr>=60&&mr<=64)
    {
        return 3.00;
    }
    else  if(mr>=55&&mr<=59)
    {
        return 2.75;
    }
    else if(mr>=50&&mr<=54)
    {
        return 2.50;
    }
    else if(mr>=45&&mr<=49)
    {
        return 2.25;
    }
    else  if(mr>=40&&mr<=44)
    {
        return 2;
    }
    else if(mr<40)
    {
        return 0;
    }
}

int main ()
{
    int marks[1000],i,j, to_stu,to_sub,mr[100];

    float sub_gr[100],en_gr[100],sub,grd;

    char sub_nm[100][100], st_name[100][100],grade[10],c;

    printf("Enter total student number : ");
    scanf("%d%c",&to_stu,&c);
    for(i=0; i<to_stu; i++)
    {
        printf("enter student name :   ");
        gets(st_name[i]);
        sub = 0;
        printf("enter total subject number : ");
        scanf("%d%c",&to_sub,&c);
        printf("enter the sub name earned_markes sub_credit\n");
        for(j=0; j<to_sub; j++)
        {
            printf("     %d : sub  ",j+1);
            printf("subject name : ");
            scanf("%c",&c);
            gets(sub_nm[j]);
            printf(" Enter earned  marks : ");
            scanf("%d",&mr[j]);
            printf(" Enter subject credit : ");
            scanf("%f",&sub_gr[j]);

            sub = sub + sub_gr[j];

        }
        grd = 0;
        for(j=0; j<to_sub; j++)
        {
            en_gr[j] = grad(mr[j]);
            grd = grd + (en_gr[j]*sub_gr[j]);
        }
        float  grade = grd / sub;
        printf("\n\nName : ");
        puts(st_name[i]);
        printf("CGPA : %.2f\n\nDetails result has geven below :\n\n",grade);

        printf("SUB-NAME | MARKS | EARNED_CREDIT | CREDIT\n\n");
        for(j=0; j<to_sub; j++)
        {
            puts(sub_nm[j]);
            printf("            %3d       %.2f       %.2f\n",mr[j],en_gr[j],sub_gr[j]);
        }
        printf("-----------------------------------------------------\n");
        printf("               CGPA-%.2f total credit: %.2f\n\n",grade,sub);
}
}
