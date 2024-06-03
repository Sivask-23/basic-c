#include<stdio.h>

int printFact(int num);

int main(){

    printf("Factorial is %d",printFact(4));
    

    return 0;
}
int printFact(int num){
    if (num==1)
    {
        return 1;
    }
    

int ans=printFact(num-1) * num;
return ans;
    
}