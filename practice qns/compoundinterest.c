
// amount = principal * ((pow((1+rate/100),time)));
// CI= amount-principal

#include<stdio.h>
#include<math.h>

int main(){

    double priciple=2300; // amount
    double rate=7; // ROI
    double time=4; // duration

    double total_amount=priciple*((pow((1+rate/100),time)));
    double CI=total_amount-priciple;
    printf("CI is %lf",CI);

    return 0;

}