#include<stdio.h>
int main(){

    do
    {
        int a;
        printf("enter num\n");
        scanf("%d",&a);
        printf("%d\n",a);
        if (a%2!=0)
        {
            break;  // exit from do-while loop
        }
        

    } while (1);
    printf("Thank you ! \n");
    

    return 0;
}