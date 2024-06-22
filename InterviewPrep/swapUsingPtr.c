#include <stdio.h>

void swap(int,int);
void _swap(int *, int *);

int main()
{

    int a=5;
    int b=10;
    swap(a,b);
    printf("value of a = %d\n b = %d\n ", a,b);

    printf("After swaping using pointers\n");

    _swap(&a,&b);
    printf("value of a = %d\n b = %d\n ", a,b);


    return 0;
}

void swap(int a, int b)
{
    int t=a;
    a=b;
    b=t;
    printf("value of a = %d\n b = %d\n ", a,b);
}
void _swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    printf("value of a = %d\n b = %d\n ", *a,*b);
    printf("\n");
}
