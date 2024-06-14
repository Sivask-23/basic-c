#include<stdio.h>
int main(){
    int ar[]={4,4,2,3,5,1};
    int n=sizeof(ar)/sizeof(ar[0]); 

    for (int i = 0; i < n; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if (ar[j]<ar[min])
            {
                min=j;
            }
            
        }
        if (min!=i)
        {
            int temp=ar[i];
            ar[i]=ar[min];
            ar[min]=temp;
        }
        
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    

    return 0;
}