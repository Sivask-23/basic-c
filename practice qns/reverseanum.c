#include <stdio.h>
int reverse(int num, int ans);
int main()
{
    int ans = 0;
    printf("%d", reverse(15345, ans));
    return 0;
}
int reverse(int num, int ans)
{

    if (num == 0)
    {
        return ans;
    }

    ans = ans * 10 + (num % 10);
    return reverse(num / 10, ans);
}