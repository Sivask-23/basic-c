#include<stdio.h>

void mergeSort(int[],int,int,int[]);
void merge(int [],int,int,int,int[]);
int main(){
    int ar[]={4,2,3,5,1};
    int n=sizeof(ar)/sizeof(ar[0]); 
    int newar[n];

    mergeSort(ar,0,n-1,newar);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    

    return 0;
}
void mergeSort(int ar[],int lb,int ub,int newar[]){
    int mid;
    if (lb<ub)
    {
        mid=(lb+ub)/2;
    
    mergeSort(ar,lb,mid,newar);
    mergeSort(ar,mid+1,ub,newar);
    merge(ar,lb,mid,ub,newar);
    }

}
void merge(int ar[],int lb, int mid, int ub,int newar[]){

    int i=lb;
    int j=mid+1;
    int k=lb;

    while (i<=mid && j<=ub)
    {
        if (ar[i]<ar[j])
        {
            newar[k]=ar[i];
            i++;
        }else
        {
            newar[k]=ar[j];
            j++;
        }
        k++;
        
        
    }
  while (j<=ub)
        {
            newar[k]=ar[j];
            k++;
            j++;
        }
        
 while (i<=mid)
        {
            newar[k]=ar[i];
            k++;
            i++;
        }
        
    for (int i = lb; i <= ub; i++) {
        ar[i] = newar[i];
    }
    
}