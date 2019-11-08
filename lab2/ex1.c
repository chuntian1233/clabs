#include<stdio.h>
int main()
{
    unsigned int a=1,b=0;
    unsigned int n;
    while (a>0)
    {
        a++;
    }
    printf("unsigned int max:%d\n",a-1);
    do
    {
        n=n/10;
        b++;
    }
    while (n>0);
    printf("unsigned int max:%d\n",b);
    return 0;
}