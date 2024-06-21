#include<stdio.h>

int main(){

int a=5;
int *ptr=&a;
int **ptr1=&ptr;  // stores address of ptr to ptr1

printf("%d\n",**ptr1); // return value stored in the ptr which is inside ptr1

**ptr1+=5;
printf("%d\n",**ptr1); 






    return 0;
}