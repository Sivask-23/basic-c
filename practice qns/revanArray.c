#include<stdio.h>

int main(){

    int ar[]={1,2,3,4,5};
    int n=5;

    for (int i = 0; i <= n/2; i++)
    {
        int f=ar[i];
        int b= ar[n-1-i];
        ar[i]=b;
        ar[n-1-i]=f;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    

    return 0;
}