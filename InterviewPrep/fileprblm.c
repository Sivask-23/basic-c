#include<stdio.h>


int main(){

 FILE *fptr;
 fptr=fopen("textfile.txt","r");

 if (fptr==NULL)
 {
    printf("file not exist");
 }else{
    printf("file exists");
 }

 printf("\n");
 char ch;
//  fscanf(fptr,"%c",&ch);
//  printf("%c",ch);

ch=fgetc(fptr);
while (ch!=EOF)
{
    printf("%c",ch);
    ch=fgetc(fptr);

}



 fclose(fptr);


    return 0;
}