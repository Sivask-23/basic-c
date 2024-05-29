#include<stdio.h>
#include<string.h>
int main(){
    char name[]="Siva";
    char lname[]="kumar S";
    strcat(name,lname);
    puts(name);
    printf("%s\n",name);
    printf("%d\n",strcmp(name,lname));
    char str[]="Siva";
    char str1[100];
    str1[1]=str[1];
    puts(str1);
    return 0;
}