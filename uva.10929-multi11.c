#include<stdio.h>
#include<string.h>
int main()

{
    char n[10000];
    int len, i, j, num, rem, c;
    while(gets(n))
    {

        c = 0;
        len = strlen(n);
        rem = 0;
        for(i =0; i <len; i++)
        {
            if(n[i] >= '0' && n[i] <= '9')
            {
                c += (n[i] - 48);
                rem = ((n[i]-48) + (rem * 10)) % 11;
            }
        }
        if(c == 0)
        {
            break;
        }
        if(rem == 0)
        {
            printf("%s is a multiple of 11.\n",n);
        }

        else
        {



            printf("%s is not a multiple of 11.\n", n);

        }

    }

    return 0;

}
