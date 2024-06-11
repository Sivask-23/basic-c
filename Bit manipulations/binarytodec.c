#include<stdio.h>

int main(){
int binaryNum=101;
int a=1;
int ans=0;

while (binaryNum!=0)
{
    int lastDigit=binaryNum % 10;
    ans = ans + (lastDigit * a);
    binaryNum=binaryNum/10;
    a=a*2;
}

printf("%d\n",ans);





    return 0;
}