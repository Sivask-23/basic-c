#include<stdio.h>

int main(){

    int num,count=0;
    printf("Enter num to check :\n");
    scanf("%d",&num);
    for (int i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            count++;
        }
        
    }
    if (count==0)
    {
        printf("%d is prime number",num);
    }
    else{
        printf("%d is not prime",num);
    }
    
    

    return 0;
}