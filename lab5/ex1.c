#include<stdio.h>
void reverse(char *j);

int main()
{
    printf("please enter words:");
    char *s;
    scanf("%s",*&s);
    reverse(s);
    return 0;
}

void reverse(char *j)
{
    char i=*j;
    if(1)
    {
        reverse(j=j+1);
    }
    printf("%c",i);
}