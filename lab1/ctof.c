#include<stdio.h>
main()
{
    int fahr,celsius;
    int lower,upper,step;
    
    lower=0;
    upper=500;
    step=5;

    celsius=lower;
    while(celsius<=upper){
        fahr=32+(9*celsius/5);
        printf("celsius,fahr");
        printf("%d\t%d\n",celsius,fahr);
        celsius=celsius+step;
    }

    
}