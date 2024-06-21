#include <stdio.h>

void printEle(int *,int);

int main()
{

int ar[]={6,2,3,4,5};
int size=sizeof(ar)/sizeof(ar[0]);
printEle(ar,size);

for (int i = 0; i < size; i++)
{
    printf("%d\t",ar[i]);
}

return 0;
}

void printEle(int * ar,int n){
    for (int i = 0; i < n; i++)
    {
        // printf("%d\t",*(ar+i)+1);
        *(ar+i)+=1;
    }
    

}


