#include<bits/stdc++.h>
using namespace std;
struct ar{
int I=0,V=0,X=0,L=0,C=0;
}arr[110];
int main()
{
     int num;
     for(int i=0;i<=100;i++)
     {
          arr[0].X++;
          if(i<=10)
          {
               if(i==10)arr[i].X++;

               else if(i==1)arr[i].I++;

               else if(i==2)arr[i].I=2;

               else if(i==3)arr[i].I=3;

               else if(i==4)arr[i].I=1,arr[i].V=1;

               else if(i==5)arr[i].V=1;

               else if(i==6)arr[i].V=1,arr[i].I=1;

               else if(i==7)arr[i].V=1,arr[i].I=2;

               else if(i==8)arr[i].V=1,arr[i].I=3;

               else if(i==9)arr[i].X=1,arr[i].I=1;
          }
          else if(i>10 && i<40)
          {
               arr[i].X=arr[i-10].X+1;
               arr[i].I=arr[i-10].I;
               arr[i].V=arr[i-10].V;
          }
          else if(i==40)arr[i].X=1,arr[i].L=1;
          else if(i>40 &&i<50)
          {
               int a=i%10;
               arr[i].X=arr[a].X+1;
               arr[i].L=1;
               arr[i].V=arr[a].V;
               arr[i].I=arr[a].I;
          }
          else if(i==50)arr[i].L++;
          else if(i>50&&i<60)
          {
               int a=i%10;
               arr[i].L=1;
                 arr[i].V=arr[a].V;
               arr[i].I=arr[a].I;
               arr[i].X=arr[a].X;
          }
          else if(i==60)arr[i].L=1,arr[i].X=1;

          else if(i>60 && i<90)
          {
                 arr[i].X=arr[i-10].X+1;
               arr[i].I=arr[i-10].I;
               arr[i].V=arr[i-10].V;
               arr[i].L=1;
          }
          else if(i==90)arr[i].X=1,arr[i].C=1;
          else if(i>90 && i<99)
           {
               int a=i%10;
               arr[i].C=1;
                 arr[i].V=arr[a].V;
               arr[i].I=arr[a].I;
               arr[i].X=1;
          }
          else if(i==99)arr[i].X=2,arr[i].C=1,arr[i].I=1;

          else if(i==100)arr[i].C++;
     }
     while(scanf("%d",&num)!=EOF)
     {
          if(num==0)break;

          arr[107].I=0;
          arr[107].V=0;
          arr[107].X=0;
          arr[107].L=0;
          arr[107].C=0;
          for(int i=1;i<=num;i++)
          {
               arr[107].I=arr[107].I+arr[i].I;
               arr[107].V=arr[107].V+arr[i].V;
               arr[107].X=arr[107].X+arr[i].X;
               arr[107].L=arr[107].L+arr[i].L;
               arr[107].C=arr[107].C+arr[i].C;
          }

          printf("%d: %d i, %d v, %d x, %d l, %d c\n",num,arr[107].I,arr[107].V,arr[107].X,arr[107].L,arr[107].C);
     }
}
