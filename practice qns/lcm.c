#include<stdio.h>
int gcd(int a, int b);

int main(){

    int a=12, b=9;

    int lcm=(a*b)/gcd(a,b);
    printf(" LCM of %d and %d is %d",a,b,lcm);

    return 0;
}
int gcd(int a, int b){

    int res = ((a<b)? a:b);
    while (res)
    {
        if (a%res==0 && b%res==0)
        {
            break;
        }
        res--;
        
    }
    return res;
    

}