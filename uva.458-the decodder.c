#include<stdio.h>
#include<string.h>
int main ()
{
    char inp[1000000];
    int i, j;
    while(gets(inp))
    {
        j = strlen(inp);
        for(i=0; i<j; i++)
        {
            inp[i] = inp[i] - 7;
        }
        for(i=0; i<j; i++)
        {
            printf("%c",inp[i]);
        }
        printf("\n");
    }
}
