#include<stdio.h>
void reverse(char *j)
{
    char i=*j;
    if(i)
    {
        reverse(j=j+1);
    }
    printf("%c",i);
}
int main()
{
    printf("please enter words:");
    char *s;
    scanf("%s",*&s);
    reverse(s);
    return 0;
}