#include <stdio.h>

 int main()
{
  char c[5];
  int count;
  int i=0;
  unsigned int input=0;
  printf("输入一个正整数\n");
  while( (c[i] = getchar())!= '\n' )
  {
    input=10*input+(c[i]-'0');
  }   
      for(count = 0;input != 0;input>>= 1){
      if (input & 01)
       count++;
       }
   printf("%d\n",count);
   return 0;
  
}
