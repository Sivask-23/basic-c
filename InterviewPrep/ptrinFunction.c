#include <stdio.h>

void squareofn(int);
void _squareofn(int *);

int main()
{

    int number = 5;
    squareofn(number);
    printf("number is %d\n", number);
    _squareofn(&number);
    printf("value of number after using pointer is %d\n",number);

    return 0;
}

void squareofn(int n)
{
    n = n * n;
    printf("sqaure is  %d\n", n);
}
void _squareofn(int *n)
{
    *n = (*n) * (*n);
    printf("sqaure is  %d\n", *n);
}
