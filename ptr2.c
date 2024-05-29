#include<stdio.h>
void doWork(int a, int b, int * sum, int *prod, int *avg);
int main(){
    int a=24, b=25;
    int sum,avg,prod;
    doWork(a,b,&sum,&prod,&avg);

    printf("%d\n",sum);
    printf("%d\n",avg);
    printf("%d\n",prod);
    return 0;
}
void doWork(int a, int b, int * sum, int *prod, int *avg){
    *sum=a+b;
    *avg=(a+b)/2;
    *prod=a*b;
}