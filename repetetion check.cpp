#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, x, c1, c2, cont = 0;

    for(i = 1 ; i <= 5000; i++){
    n = i;
    x = c1 = c2 =  0;

    while(n != 0){
        j = n % 10;
        n = n / 10;
        x = x | (1 << j);
        c1++;
    }
    /*for(i = 0; i <= 9; i++)
    {
        if(x & (1 << i))
            c2++;
    }*/
    c2 = __builtin_popcount(x);
    if(c1 == c2)
        cont++;

    }

    printf("%d\n", cont);
}
