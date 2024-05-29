#include <stdio.h>
int main()
{
    int a, b, c, n;
    printf("Enter n: ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("%d %d ", a, b);
    // c=a+b;
    // while (c<=n)
    // {

    //     printf("%d ",c);
    //     a=b;
    //     b=c;
    //     c=a+b;
    // }
    for (int i = 3; i <= n; i++)
    {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}