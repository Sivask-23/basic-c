#include<stdio.h>

int main(){

    int ar[]={10,2,33,4,5};
    int n=5;
    int min=ar[0];
    int max=ar[0];

    for (int i = 0; i < n; i++)
    {
        if (ar[i]>=max)
        {
            max=ar[i];
        }
        if (ar[i]<=min)
        {
            min=ar[i];
        }
        
        
    }
    
    printf("max is %d and min is %d",max,min);

    return 0;
}
