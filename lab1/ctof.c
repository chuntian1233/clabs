#include<stdio.h>
main()
{
    int celsius,fahr;
    int lower,upper,step;

    lower=0;
    upper=500;
    step=5;

    celsius=lower;
    while(celsius<=upper){
        fahr=32+9*celsius/9;
        celsius=celsius+step;
    }

    
}