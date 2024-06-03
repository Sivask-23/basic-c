#include<stdio.h>

void leapyearorNot(int year);

int main(){


    leapyearorNot(2004);
    leapyearorNot(2008);
    leapyearorNot(2012);
    leapyearorNot(2048);
    leapyearorNot(2009);

    return 0;
}
void leapyearorNot(int year){
    if (year%400==0)
    {
        printf("%d is leap year\n",year);
    }
    else if (year%100==0)
    {
       printf("%d is not a leap year\n",year);
    }
    else if (year%4==0)
    {
        printf("%d is leap year\n",year);
    }
    else{
        printf("%d is not leap year\n",year);
    }
    
    
    
}