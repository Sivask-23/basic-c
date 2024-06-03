#include <stdio.h>

int main()
{
    int N = 10011;
    int a = 1;
    int ans = 0;
    while (N != 0)
    {
        int lastDigit = N % 10;
        ans = ans + lastDigit * a;
        N = N / 10;
        a = a * 2;
    }
    printf("%d\n", ans);

    return 0;
}