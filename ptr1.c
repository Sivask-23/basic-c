#include<stdio.h>
int main(){
    int i=24;
    int *ptr=&i;
    int j=*ptr;
    int **pptr=&ptr;
    printf("%d\n",(**pptr));
    printf("%d\n",j);
    // printf("%p\n",&a);
    // printf("%p\n",&ptr);
    // printf("%p\n",ptr);
    // printf("%d\n",*ptr);
    //scanf("",);
    return 0;
}