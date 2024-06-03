#include<stdio.h>

int main(){

    int a=4;
    int b=5;

    // XOR of 2 equal number is zero

    // printf("%d",(a^b));
    if ((a^b)==0)
    {
        printf("Equal\n");
    }
    else{
        printf("Not equal\n");
    }

    return 0;
}