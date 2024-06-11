#include<stdio.h>

void reverseArray(int  ar[],int size);  // declare

int main(){

int num=5;
int ans[]={0,0,0,0,0};
int size=sizeof(ans)/sizeof(int);
int i=0;
while (num!=0)
{
    int rem=(num%2);
    ans[i]=rem;
    num=num/2;
    i++;
}
reverseArray(ans,size);
for (int k = 0; k < size; k++)
{
    printf("%d\t",ans[k]);
}
printf("\n");
printf("%d\n",size);

    return 0;
}


void reverseArray(int  ar[], int size){   // define
    int *l=ar;
    int *h=ar+4;
    while (l<h)
    {
        int temp=*l;
        *l=*h;
        *h=temp;
        h--;
        l++;
    }
    
}