#include<stdio.h>
int main(){
    int n=12;
    for (int i = 0; i < n; i++)
    {

        if (i%2==0)
        {
            continue; // skip current iteration and continue to next
        }
        printf("%d ",i);
        
    }

        for (int i = 0; i < n; i++)
    {

        if (i==3)
        {
           break; // exits from for loop completely
        }
        printf("%d ",i);
        
    }
    

    return 0;
}