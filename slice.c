#include<stdio.h>
#include<string.h>
void slice(char name[], int n, int m);
int main(){
    char name[]="Sivakumar S";
    int n=4, m=9;
    slice(name,n,m);
    return 0;
}
void slice(char str[], int n, int m){
    char newStr[50];
    int j=0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j]= str[i];
    }
    newStr[j]='\0';
    puts(newStr);
    
}