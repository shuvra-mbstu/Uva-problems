#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int hight[1000],numbers,i,j,k=0,sum,avg,count;
    while(scanf("%d",&numbers)!= EOF)
    {
        sum = 0;
        k++;
        count = 0;
        if(numbers == 0)
        {
            break;
        }
        for(i=0;i<numbers;i++)
        {
            scanf("%d",&hight[i]);
            sum = sum + hight[i];
        }
        avg = sum /numbers;

        for(i=0;i<numbers;i++)
        {
            if(hight[i]>avg)
            {
                count = count +(hight[i]-avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",k,count);
    }
}
