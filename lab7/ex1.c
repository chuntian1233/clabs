#include<stdio.h>

#include<stdlib.h>

int main(int argc,char*argv[])
{

    double a[100];

    int i =1;

    int j = 0;

    int x=0;

    double temp;

    for(i=1;i<argc;i++,j++){

        a[j]=atof(argv[i]);//char-- double

    }

    for(x=0;x<argc-2;x++)
{

     if(a[x]<a[x+1]) 

      {temp=a[x];

       a[x]=a[x+1];

       a[x+1]=temp;}

}

printf("The min is：%g\n",a[argc-2]);

return 0;

}


#include <stdio.h>
 
void main()
{
    int a[5] = {2, 10, 5, 16, 8};
     
    int index = 0;
     
    int maxNum = a[0];
    for (int i = 0; i< 5; i++)
    {
         if (maxNum < a[i])
         {
             maxNum = a[i];
             index = i;
         }
    }
     
    printf("最大数：%d, 下标：%d\n", maxNum, index);
}