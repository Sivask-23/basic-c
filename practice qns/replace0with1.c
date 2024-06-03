#include <stdio.h>

int main()
{

    int num = 100230000;

    int ans = 0;
    int i = 1;
    while (num != 0)
    {
        int digit=num%10;
        if (digit == 0)
        {
            ans = ans + 1 * i;
        }
        else
        {
            ans = ans + (digit) * i;
        }

        num = num / 10;
        i=i*10;
    }
    printf("%d", ans);

    return 0;
}