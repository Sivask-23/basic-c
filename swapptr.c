#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main(){
    int a=24, b=25;
    //swap(a,b);
    _swap(&a,&b);
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    return 0;
}
void swap(int a, int b){ // since it is pass by value this will swap only on copy of varibales rather than exact variables
    int t = a;
    a=b;
    b=t;
    printf("a= %d\nb= %d \n",a,b);
}
void _swap(int *a, int *b){ // by passing reference it will change swap exact values of  a and b
    int t = *a;
    *a=*b;
    *b=t;
}