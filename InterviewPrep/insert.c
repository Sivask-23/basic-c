#include<stdio.h>
int main(){
    int ar[]={0,10,94,2,3,5,1};
    int n=sizeof(ar)/sizeof(ar[0]); 

    for (int i = 1; i < n; i++)
    {
        int temp=ar[i];
        int j=i-1;
        while (j>=0 && ar[j]>temp)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    

    return 0;
}