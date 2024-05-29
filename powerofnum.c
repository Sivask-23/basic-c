#include<stdio.h>
#include<math.h>
float powerof(int n);
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Power of %d is %f",num,powerof(num));
    return 0;
}
float powerof(int n){
    return pow(n,2);
}