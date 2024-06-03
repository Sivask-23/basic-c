#include<stdio.h>

void sort(int ar[], int size);

int main(){
    int ar[]={1,2,3,4,5,6,7,8};
    int size=sizeof(ar)/sizeof(ar[0]);

    sort(ar,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ",ar[i]);
    }
    






    return 0;
}
void sort(int ar[], int size){
    //  ascending order
    for (int i = 0; i < size; i++)
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
    // descending order

    for (int i = (size/2) ; i < size; i++)
    {
        for (int j = i; j < size-1; j++)
        {
            if (ar[j]<ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
            
        }
        
    }
    
}