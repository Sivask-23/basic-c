#include<stdio.h>
int main(){
    int a;
    printf("Enter num: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    
    default:
    printf("Invalid key");
        break;
    }
    return 0;
}