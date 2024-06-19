#include<stdio.h>
int main(){
    int ar[]={4,2,3,5,1};
    int n=sizeof(ar)/sizeof(ar[0]); 

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (ar[j]>ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    

    return 0;
}