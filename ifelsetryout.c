#include<stdio.h>
int main(){

    char ch;
    printf("Enter charector: ");
    scanf("%c",&ch);

    if (ch>='a'&&ch<='z')
    {
        printf("Lower case\n");
    }
    else if (ch>='A'&&ch<='Z')
    {
        printf("upper case\n");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("number\n");
    }
    else
    {
        printf("invalid\n");
    }
    
    

    return 0;
}