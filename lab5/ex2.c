#include<stdio.h>
float add(float a,float b);

int main()
{
    float i,j,k;
    printf("please input i and j:\n");
    scanf("%f %f",&i,&j);
    k=add(i,j);
    printf("the output is:%1.2f",k);
    return 0;
}

float add(float a,float b)
{
    float c;
    c=a+b;
    return c;
}