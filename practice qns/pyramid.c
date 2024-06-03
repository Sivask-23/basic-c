#include<stdio.h>

int main(){


    int r=5, c=5;

    for (int i = 1; i <=r; i++)
    {
        for (int j = 0; j < c-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j < 2*i; j++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
    return 0;
}