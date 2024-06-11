#include<stdio.h>

int main(){
int Num=11020302;
int ans=0;
int i=0;
int power=1;

while (Num!=0)
{
    int lastDigit=Num % 10;
    if (lastDigit==0)
    {
        lastDigit=1;
    }
    ans=ans+(lastDigit)*power;
    Num=Num/10;
    i++;
    power=power*10;
}   

printf("%d\n",ans);





    return 0;
}