#include <stdio.h>
#include <string.h>

int main(){

    char str[]="111";
    int decimal=0;
    int base=1;
    int len=strlen(str);
    for (int i = len-1; i >= 0; i--)
    {
        if (str[i]=='1')
        {
            decimal = decimal + base;
        }

        base=base*2;
        
    }
    
printf("%d",decimal);

    return 0;
}