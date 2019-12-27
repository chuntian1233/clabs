#include <stdio.h>
#include<string.h>
#define MAX 100
int strrindex(char s[],char t[]);

int main()
{
  char s[MAX];
  char t[MAX];

  printf("input s:\n");
  scanf("%s",s);
  printf("input t:\n");
  scanf("%s",t);
  printf("%d\n",strrindex(s,t));
  return 0;
}
int strrindex(char s[],char t[])
{
  int i,j,k;
  for (i=strlen(s)-strlen(t);i>=0;i--){
      for (j=i,k=0; t[k]!='\0'&& s[j]==t[k];j++,k++)
        ;
      if (k>0 && t[k]=='\0')
      return i; 
  }
  return -1;
}