#include<stdio.h>
#include<ctype.h>

int main(){
   char st[]="123456";
   int sum=0;

    for (int i = 0; st[i]!='\0'; i++)
    {
        int ele=st[i]-48;
       if (ele<=9)
       {
        sum+=ele;
       }
        
        
    }
    printf("%d",sum);

    return 0;
}