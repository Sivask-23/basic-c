#include <stdio.h>
#include <string.h>
void reversestr(char *);
int main()
{

char line[]="malayalam";
char newstr[20];
strcpy(newstr,line);

reversestr(line);

puts(line);
puts(newstr);

int isPalindrome=1;

for (int i = 0; i < strlen(line); i++)
{
    if (line[i]!=newstr[i])
    {
        isPalindrome=0;
        break;
    }
    
}
if (isPalindrome)
{
    printf("Palindrome\n");
}else{
    printf("not palindrome\n");
}


    return 0;
}

void reversestr(char *str){


    int length=strlen(str);
    int l=0;
    int h=length-1;
    char t;
    while (l<h)
    {
        t=str[l];
        str[l]=str[h];
        str[h]=t;
        l++;
        h--;
    }
    

}
