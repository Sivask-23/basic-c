#include<stdio.h>
int factr(int n);
int sumofn(int n);
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    printf("factorail upto %d is %d\n",n,factr(n));
    printf("sum of natural numbers upto %d is %d\n",n,sumofn(n));
    return 0;
}
int factr(int n){
    if (n==1)
    {
        return 1;
    }
    
    int res=factr(n-1) * n;
    return res;
}
int sumofn(int n){
    if (n==1)
    {
        return 1;
    }
    
    int res=sumofn(n-1) + n;
    return res;
}