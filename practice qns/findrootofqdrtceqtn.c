#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = -10, c = 1;

    int d = (b * b) - (4 * a * c);
    double sqrt_value = sqrt(abs(d));

    if (d > 0)
    {
        printf("Roots are real and diffrnt\n");
        printf("%f\n%f", (double)(-b + sqrt_value) / (2 * a), (double)(-b - sqrt_value) / (2 * a));
    }
    else if (d == 0)
    {
        printf("Roots are real and same\n");
        printf("%f", (double)(-b) / (2 * a));
    }
    else
    {
        printf("Roots are complex\n");
        printf("%f + i%f\n%f - i%f", -(double)b / (2 * a),
               sqrt_value / (2 * a), -(double)b / (2 * a),
               sqrt_value / (2 * a));
    }

    return 0;
}