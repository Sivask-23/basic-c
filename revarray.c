#include<stdio.h>
void revArray(int ar[], int n);
int main(){
    int ar[]={1,2,3,4,5};
    int n=5;
    revArray(ar,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",ar[i]);
    }
    
    return 0;
}
void revArray(int ar[], int n){

    for (int i = 0; i < n/2; i++)
    {
        int first=ar[i];
        int last= ar[n-i-1];
        ar[i]=last;
        ar[n-i-1]=first;

    }
    

}