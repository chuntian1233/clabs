#include <stdio.h>
int main()
{
    unsigned int a = 0; 
    a=~a;

    printf("unsigned int max value:%u\n", a );

    unsigned int n = a - 1;
    int b = 0; 
    while(n>0)
    {
        n = n>>1;
        b++;
    }
    printf("unsigned int max bit:%d\n", b);
    return 0;
}
