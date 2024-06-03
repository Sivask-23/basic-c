#include<stdio.h>

int orderofnum(int n);
int powerofnum(int num , int n);

int main(){

    int num=407; // i53, 370, 407, 371 are armstrong number
    int temp=num;
    int sum=0;

    int order=orderofnum(num);
    while (num)
    {
        int lastDigit=num%10;
        sum=sum+powerofnum(lastDigit,order);
        num=num/10;
    }
    if (sum==temp)
    {
        printf("%d is armstrong number\n",temp);
    }
    else{
        printf("%d is not armstrong number\n",temp);
    }


    return 0;
}
int orderofnum(int n){
    int count=0;
    while (n)
    {
        count++;
        n=n/10;
    }
    return count;
}
int powerofnum(int num , int n){
    int res=1;

    for (int i = 1; i <= n; i++)
    {
        res=res*num;
    }
    return res;
    
}