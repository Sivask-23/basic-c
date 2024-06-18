#include <stdio.h>
#include <string.h>
int main()
{

char line[]="Sivakumar";
int n=strlen(line);
char name[n+1];

for (int i = n-1,j=0; i >= 0; i--,j++)
{
    name[j]=line[i];
}
name[n]='\0';

puts(name);
printf("%d\n",n);
printf("%d\n",strcmp(line,name));

    return 0;
}


