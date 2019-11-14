#include<stdio.h>
int main()
{
    unsigned int b=0;
    unsigned int n;
    do
    {
        n=n/10;
        b++;
    }
    while (n>0);
    printf("unsigned int max:%d\n",b);
    return 0;
}