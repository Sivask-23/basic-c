#include <stdio.h>
#include <string.h>
int main()
{

char line[]="My name is Sivakumar S";

// printf("%c\n",*(line+1));

char *token;
char *tokens[100];
int i=0;

token=strtok(line," ");

while (token!=NULL && i<100)
{
   tokens[i++]=token;
    token=strtok(NULL," ");
}


for (int k = i-1; k >=0; k--)
{
    printf("%s ",tokens[k]);
}


    return 0;
}


