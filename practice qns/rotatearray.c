#include<stdio.h>

void reversek(int ar[], int start, int end);

int main(){

    int ar[]={1,2,3,4,5,6,7};
    int n=sizeof(ar)/sizeof(ar[0]);
    int rotate=3;
    reversek(ar,0,n-1); // rotate whole
    reversek(ar,0,n-rotate-1);
    reversek(ar,n-rotate,n-1);


    for(int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    


    return 0;
}
void reversek(int ar[], int start, int end){

    int temp=0;
    while (start<end)
    {
        temp=ar[start];
        ar[start]=ar[end];
        ar[end]=temp;
        start++;
        end--;
    }
    
    
}