#include<stdio.h>
main()
{
    char input_char;
    int dec[5],bin[10];
    int i=0,j=0,c;
    int input=0,count=0;
    while((input_char=getchar())!='\n')
      dec[i]=(int)(input_char-'0');
      i++;
    i--;
    for(;i>=0;i--)
    for(c=0;c<j;c++)
      dec[i]=dec[i]*10;
      input=input+dec[i];
    j++;
    for(;i>=0;i--)
      printf("%d",bin[i]);
      count++;
      printf("%d",count); 

}