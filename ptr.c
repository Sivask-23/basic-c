#include<stdio.h>
int main(){
    int a=24;
    int *ptr=&a;
    int _age=*ptr+1;
    printf("%d\n",_age);
    printf("%p\n",&a);
    printf("%p\n",&ptr);
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    //scanf("",);
    return 0;
}