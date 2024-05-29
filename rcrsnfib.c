#include<stdio.h>
int fibofn(int n);
int main(){
    int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
       printf("%d",fibofn(i));
    }
    
    
    return 0;
}
int fibofn(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    int fibNm1= fibofn(n-1);
    int fibNm2= fibofn(n-2);
    int fibseq=fibNm1+fibNm2;
    return fibseq;
}