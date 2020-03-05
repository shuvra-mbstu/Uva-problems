#include<bits/stdc++.h>
using namespace std;
#define ma 2000000000
int main()
{
    unsigned long long int sum, num, test, i, j, k;
    vector<  int>vt;
       i=0;
        sum=0;
        for(j=0; j<=ma; j++){
        while(sum<j)
        {
                        i++;
            sum=((i+1)*i)/2;
            if(sum>j)
            {
                i--;
                break;
            }
        }
       vt.push_back(sum);
        }
    scanf("%llu",&test);
    while(test--)
    {
        scanf("%llu",&num);
        cout<<vt[num]<<endl;
    }
    return 0;
}
