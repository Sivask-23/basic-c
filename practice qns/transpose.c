#include<stdio.h>

int main(){

    int M = 3; 
    int N = 3; 
    
    int ar[3][3] ={{1,2,3},
                  {3,4,8},
                  {4,5,10}};


    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ",ar[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}