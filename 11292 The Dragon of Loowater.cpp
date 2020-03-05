#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num1,num2;
     int dra[20007],man[20007];
     while(scanf("%d%d",&num1,&num2)!=EOF)
     {
          if(num1==0 && num2==0)break;

               for(int i=0;i<num1;i++)
          {
               scanf("%d",&dra[i]);
          }
               int flg=0,val=0;
          for(int i=0;i<num2;i++)
          {
               scanf("%d",&man[i]);
          }
          if(num2<num1)printf("Loowater is doomed!\n");
          else
          {
               sort(dra,dra+num1);
               sort(man,man+num2);
               for(int i=0;i<num1;i++)
               {
                    for(int j=i;j<num2;j++)
                    {
                         if(man[j]>=dra[i])
                         {
                              val+=man[j];
                              man[j]=0;
                              flg++;
                              break;
                         }
                    }
               }
               if(flg==num1)
                    printf("%d\n",val);
               else printf("Loowater is doomed!\n");
          }

     }
}
