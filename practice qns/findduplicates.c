#include<stdio.h>

void sortArray(int ar[], int size);

int main(){

    int ar[]={1,6,2,8,4,1,0,9,6,8,8,9};
    int n=12;
    sortArray(ar,n);

    for (int i = 0; i < n-1; i++)
    {
        if (ar[i]==ar[i+1])
        {
             printf("%d ",ar[i]);

            //  while (i<n-1 && ar[i]==ar[i+1] )
            //  {
            //     i++;
            //  }
             i++;
             
        }
        
    }
    
    

    return 0;
}
void sortArray(int ar[], int size){
    for (int i = 0; i < size-1; i++)
    {
    for (int j = 0; j < size-i-1; j++)
    {
        if (ar[j]>ar[j+1])
        {
            int temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }
        
    }
    }
    
}