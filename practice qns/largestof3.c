#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("Enter num 1:\n");
    scanf("%d",&n1);
        printf("Enter num 2:\n");
    scanf("%d",&n2);
        printf("Enter num 3:\n");
    scanf("%d",&n3);

    if (n1>n2 && n1> n3)
    {
        printf("%d is largest",n1);
    }else if (n2>n1 && n2>n3)
    {
        printf("%d is largest",n2);
    }
    else{
        printf("%d is largest",n3);
    }
    
    


    return 0;
}