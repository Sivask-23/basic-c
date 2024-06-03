#include<stdio.h>

int main(){
    int m=3,n=3;

    int ar[3][3]={{1,2,3},
                  {3,4,6},
                  {5,6,9}};


    int newar[3][3];

    

    // for (int i = 0; i< m; i++)
    // {
    //     for (int j = m-1; j >=0; j--)
    //     {
    //         printf("%d ",ar[j][i]);
    //     }
    //     printf("\n");
        
    // }


   for (int i = 0,k=2; i < m,k>=0; i++,k--)
   {
    for (int j = 0; j < m; j++)
    {
 
       newar[j][k]=ar[i][j];
    }
    
   }
   


    for (int i = 0; i< m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",newar[i][j]);
        }
        printf("\n");
        
    }

   

    return 0;
}