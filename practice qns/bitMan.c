#include<stdio.h>

int main(){

    int x=30;
    int i=1;

    printf("%d\n",(x>>i)); // right shift
    printf("%d\n",(x<<i)); // left shift
    printf("%d\n",(x^5)); // XOR with 5

    return 0;
}