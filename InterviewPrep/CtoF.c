#include<stdio.h>

float celsiusTofar(float);

int main(){

float cel=37;

printf(" %.2f celsius in Farenhiet is %5.2f\n",cel, celsiusTofar(cel));


    return 0;
}

float celsiusTofar(float cel){

    float res= cel * (9.0/5.0) + 32;
    return res;
}