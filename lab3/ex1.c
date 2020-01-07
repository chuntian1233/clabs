#include <stdio.h>
#include<string.h>
#define MAX 100
int strindex(char s[],char t[]);

int main()
{
  char s[MAX];
  char t[MAX];

  printf("input s:\n");
  scanf("%s",s);
  printf("input t:\n");
  scanf("%s",t);
  printf("%d\n",strindex(s,t));
  return 0;
}
#include<string.h>

int strindex (char s[], char t[])

{

    int i,j,k,pos=0;

    for(i = 0;s[i] !='\0'; i++){

        for(j = i,k=0;t[k]!='\0'&& s[j]==t[k];j++,k++)
        ;
         if(t[k]=='\0'&& k>0){

        pos = i+1;

    }

    }

    if(pos >0)

    return pos-1;

    return -1;

}