#include <stdio.h>

int main()
{

    int a = 8, b = 35;

    int res = ((a < b) ? a : b);

    while (res)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }

    printf("Result is %d", res);
    return 0;
}