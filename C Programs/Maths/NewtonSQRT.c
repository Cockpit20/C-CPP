#include <stdio.h>
#include <math.h>
double sqrt(double n);
int main()
{
    double n = 40;
    printf("%.3f", sqrt(n));
}
double sqrt(double n)
{
    double x = n;
    double root;
    while (1)
    {
        root = 0.5 * (x + (n / x));
        if (abs(root - x) < 0.001)
            break;
        x = root;
    }
    return root;
}