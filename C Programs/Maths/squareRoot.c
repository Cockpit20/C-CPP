#include <stdio.h>
double squareRoot(int n, int p);
int main()
{
    int n = 3;
    int p = 2;
    printf("%.2f", squareRoot(n, p));
}
double squareRoot(int n, int p)
{
    int start = 0;
    int end = n;
    double root = 0.0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid == n)
            root = mid;
        if (mid * mid > n)
            end = mid - 1;
        else
            start = mid + 1;
    }
    double increment = 0.1;
    for (int i = 1; i <= p; i++)
    {
        while (root * root <= n)
        {
            root += increment;
        }
        root -= increment;
        increment /= 10;
    }
    return root;
}