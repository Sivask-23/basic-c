#include <stdio.h>
#include <string.h>
int main()
{

char line[]="Sivakumar";
int n=strlen(line);

char name[50];

printf("Enter full name:\n");
fgets(name,50,stdin);

puts(name);


    return 0;
}


