#include<stdio.h>

void sumofsub(int ar[], int start, int end,int sum);

int main(){

    int ar[]={1,2,3};
    int n=sizeof(ar)/sizeof(ar[0]);
    int sum=0;
    sumofsub(ar,0,n-1,sum);
    return 0;
}
void sumofsub(int ar[], int start, int end, int sum){

    if (start>end)
    {
        printf("%d ",sum);
        return;
    }
    sumofsub(ar,start+1,end,sum+ar[start]);
    sumofsub(ar,start+1,end,sum);
    
    
    
}