#include<stdio.h>
int main(){

    int table[2][10];


//   to store table of 3
        for (int j = 0; j < 10; j++)
        {
            table[0][j]= 3 * (j+1);
        }
        // to store table of 4
        for (int j = 0; j < 10; j++)
        {
            table[1][j]= 4 * (j+1);
        }
// printing first row of table 3
        for (int j = 0; j < 10; j++)
        {
           printf("%d   ",table[0][j]);
        }
        printf("\n");
// printing second row of table 4
        for (int j = 0; j < 10; j++)
        {
           printf("%d   ",table[1][j]);
        }


    
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         printf("%d ",table[i][j]);
    //     }
        
    // }
    

    return 0;
}